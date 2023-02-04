class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> list1;
        map<char,int> list2;

        for(int i=0;i<s.length();i++){
            map<char, int>::iterator it = list1.find(s[i]);
            if (it != list1.end())
            {
                it->second++;
            }
            else
            {
                list1.insert(pair<char,int>(s[i],1));
            }
        }

        for(int i=0;i<t.length();i++){
            map<char, int>::iterator it = list2.find(t[i]);
            if (it != list2.end())
            {
                it->second++;
            }
            else
            {
                list2.insert(pair<char,int>(t[i],1));
            }
        }
        if (list1 == list2)
            return true;
        else{
            return false;
        }

        
    }
};