class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};


vector<int>Solution::twoSum(vector<int>&nums, int target){

    std::unordered_map<int,int>a;
    a[nums[0]] = 0;
    std::vector<int>pair;
    for (size_t it= 1; it<nums.size();it++)
    {
        if(a.find(target-nums[it])!=a.end())
        {
            int index = a[target-nums[it]];
            pair.push_back(index);
            pair.push_back(it);
            return pair;
        }
        a[nums[it]]=it;

    }
    
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

//}
