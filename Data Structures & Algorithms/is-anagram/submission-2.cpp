class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        std::unordered_map<char,int>s1;
        std::unordered_map<char,int>s2;
         if(s.length()!=t.length())
            {

                return false;
            }
        for(int i=0;i<s.length();i++)
            {

                s1[s[i]]++;
                s2[t[i]]++;
            }

        if(s1==s2)
            {

                return true;
            }
        else
            return false;
        
    }
};
