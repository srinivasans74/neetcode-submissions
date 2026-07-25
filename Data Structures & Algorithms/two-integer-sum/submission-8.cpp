class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int,int>x;
        std::vector<int>numbers;
        for(int it=0;it<nums.size();it++)
            {

                if(x.count(target-nums[it])>0)
                    {
                        //auto it_found = std::find(x.begin(), x.end(), target-nums[it]);

                        numbers.push_back(x[target-nums[it]]);
                        numbers.push_back(it);
                        return numbers;
                    }

                x[nums[it]]=it;
            }

      return numbers;
    }
};
