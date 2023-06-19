class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }

        return 0;
    }
    char toLowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;

        for (int k = 0; k < s.length(); k++)
        {
            if (valid(s[k]))
                s[k] = toLowerCase(s[k]);
        }

        while (i <= j)
        {
            while (!valid(s[i]) && i < j)
                i++;
            while (!valid(s[j]) && j > i)
                j--;

            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};

// class Solution
// {
// public:
//     string removeSpaces(string str)
//     {
//         str.erase(remove(str.begin(), str.end(), ' '), str.end());
//         return str;
//     }

//     string removeSpecialCharacter(string s)
//     {
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'|| s[i] > 'z') {
//             if(int(s[i]) < 48 || int(s[i]) > 57 ){
//                 s.erase(i, 1);
//                 i--;
//             }
//         }
//     }
//     return s;
//     }

//     bool isPalindrome(string s)
//     {

//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         s = removeSpaces(s);
//         s= removeSpecialCharacter(s);

//         int i=0,j=s.length()-1;
//         bool result=true;

//         while(i<=j){
//             if(s[i]==s[j]){
//                 result=true;
//             }
//             else{
//                 result=false;
//                 break;
//             }
//             i++;
//             j--;
//         }

//         return result;

//     }
// };

// class Solution {
// private:
//     bool valid(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         }

//         return 0;
//     }

//     char toLowerCase(char ch) {
//     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
//     bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<=e) {
//         if(a[s] != a[e])
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// public:
//     bool isPalindrome(string s) {

//         string temp = "";

//         for(int j=0; j<s.length(); j++) {
//             if(valid(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }

//         for(int j=0; j<temp.length(); j++) {
//             temp[j] = toLowerCase(temp[j]);
//         }

//         return checkPalindrome(temp);

//     }
// };
