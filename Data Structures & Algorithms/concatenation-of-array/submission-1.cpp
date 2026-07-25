class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        //vector<int>nums1;
       // nums1=nums;
        size_t l=nums.size();
        for (int ll=0;ll<l;ll++){

            nums.push_back(nums[ll]);
        }
     return nums;   
    }
};