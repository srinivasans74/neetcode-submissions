class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int>nums1;
        nums1=nums;
        for (const auto &k:nums){

            nums1.push_back(k);
        }
     return nums1;   
    }
};