class Solution
{
public:
    string removeStars(string s)
    {
        string c = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                c.pop_back();
            }
            else
            {
                c += s[i];
            }
        }
        return c;
    }
};

// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char> st;

//         for(int i=0;i<s.length();i++){
//             if(s[i]=='*'){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }

//         string ans="";
//         string result="";

//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }

//         for(int i=0;i<ans.length();i++)
//             st.push(ans[i]);

//         while(!st.empty()){
//             result+=st.top();
//             st.pop();
//         }

//         return result;
//     }
// };