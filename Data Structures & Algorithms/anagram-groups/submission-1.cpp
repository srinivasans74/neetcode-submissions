class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> mp;

        for (const string& s : strs)
        {
            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> output;

        for (auto& p : mp)
        {
            output.push_back(p.second);
        }

        return output;
    }
};

// vector<vector<string>>Solution::groupAnagrams(vector<string>&strs)
// {
//     std::unordered_map<string,vector<string>>a;
//     std::string s;
//     for (const auto &k:strs)
//     {   s=k;
//         std::sort(s.begin(), s.end());
//         a[s].push_back(k);
//     }
//     vector<vector<string>>str;
//     for (auto &k:a){
//             str.push_back(k.second);
//     }
//     return str;
// }

