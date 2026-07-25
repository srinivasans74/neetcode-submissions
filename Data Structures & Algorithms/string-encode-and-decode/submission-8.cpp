class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int q) 
    {

        std::unordered_map<int,int>k;
        std::vector<int>sol;
        for(int num :nums)
            {

                k[num]++;

            }

        std::vector<std::pair<int,int>>vec(k.begin(),k.end());
        std::sort(vec.begin(),vec.end(),[](const auto &a, const auto &b){
            
         return a.second>b.second;
        
        
    });

        for (auto k:vec)
            {
                if(q>0)
                {
                sol.push_back(k.first);
                }
                q--;
            }
    return sol;
    }
};
