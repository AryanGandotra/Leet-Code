class Solution
{
public:
    string reverseParentheses(string s)
    {
        int n = s.length();

        stack<int> st;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                st.push(i);
            else if (s[i] == ')')
            {
                int j = st.top();
                st.pop();
                arr[i] = j;
                arr[j] = i;
            }
        }

        string result = "";
        int flag = 1;

        for (int i = 0; i < n; i += flag)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                i = arr[i];
                flag = -flag;
            }
            else
            {
                result += s[i];
            }
        }
        return result;
    }
};

// class Solution
// {
// public:
//     string reverseParentheses(string s)
//     {
//         stack<int> st;
//         string result;

//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == '(')
//                 st.push(result.length());
//             else if (s[i] == ')')
//             {
//                 int start = st.top();
//                 st.pop();
//                 reverse(result.begin() + start, result.end());
//             }
//             else
//             {
//                 result += s[i];
//             }
//         }

//         return result;
//     }
// };