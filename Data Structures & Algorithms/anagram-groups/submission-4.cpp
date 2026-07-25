class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        std::unordered_map<string,vector<string>>map;
        std::vector<vector<string>>output;
        for(auto it=strs.begin();it!=strs.end();it++)
            {
                    string key=*it;
                    std::sort(key.begin(),key.end());
                    map[key].push_back(*it);
            }
      for (const auto& pair : map)
        {
           
            output.push_back(pair.second); 
            
        }



        return output;
        
    }
};
