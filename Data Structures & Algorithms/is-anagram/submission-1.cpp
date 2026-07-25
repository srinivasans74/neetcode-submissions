class Solution {
public:
    bool isAnagram(string s, string t);
};


bool Solution::isAnagram(string s, string t){

        std::unordered_map<char,int>s1;
        std::unordered_map<char,int>s2;
        if(s.length()!=t.length()){
            return false;
        }
        for(int k=0;k<s.length();k++){

            s1[s[k]]++;
            s2[t[k]]++;

        }
        if(s1==s2){
            return true;
        }
        else{

            return false;
        }

}