class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> a;
    vector<int> ans;
    a[nums[0]]=0;
    for (int i = 1; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (a.find(complement) != a.end())
        {
            ans.push_back(a[complement]);
            ans.push_back(i);
            return ans;
        }

        a[nums[i]] = i;
    }

    return {};
}
// vector<int> Solution ::twoSum(vector<int>&nums, int target)
// {
//     std::unordered_map<int,int>list;
//     //list[0]=nums[0];
//     //list[nums[0]]=0;
//     std::vector<int>pos;
//     for(size_t i=0;i<=nums.size()-1;i++)
//     {
//         auto key=list.find(target-nums[i]);
//         if(key!=list.end()){
//             pos.push_back(key->second);
//             pos.push_back(i);
//         }
//         list[nums[i]]=i;

//     }
//     return pos;

// }
