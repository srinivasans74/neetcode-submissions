class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) ;
    //{
        
    //}
};


vector<vector<string>>Solution::groupAnagrams(vector<string>&strs)
{
    std::unordered_map<string,vector<string>>a;
    std::string s;
    for (const auto &k:strs)
    {   s=k;
        std::sort(s.begin(), s.end());
        a[s].push_back(k);
    }
    vector<vector<string>>str;
    for (auto &k:a){
            str.push_back(k.second);
    }
    return str;
}

