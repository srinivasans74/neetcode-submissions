class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        std::unordered_map<int,int>pair;
        std::vector<int>result;
        std::vector<std::vector<int>>bucket(nums.size()+1);
        for(int num:nums)
        {

            pair[num]++;

        }
        for(auto p :pair)
        {
            bucket[p.second].push_back(p.first);
        }
        for(int i=bucket.size()-1;i>=0;i--)
        {
        for (size_t j = 0; j < bucket[i].size(); j++)            
        {
            result.push_back(bucket[i][j]);

            }
            
            if(result.size()==k)
            {

                
                return result;
            }


        }
                
    }
};
