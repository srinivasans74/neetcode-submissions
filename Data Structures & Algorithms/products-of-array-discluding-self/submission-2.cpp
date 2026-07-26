class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
     {
      

      std::vector<int>prefix(nums);  
      std::vector<int>suffix(nums);  
      std::vector<int>product(nums);  

      prefix[0]=1;
      suffix[nums.size()-1]=1;
      for(int i=1;i<nums.size();i++)
      {
        prefix[i]=prefix[i-1]*nums[i-1];
        //std::cout<<prefix[i]<<endl;
      }
     for(int i=nums.size()-1;i>0;i--)
      {
        suffix[i-1]=suffix[i]*nums[i];
        //std::cout<<suffix[i]<<endl;
      }
     for(int i=0;i<nums.size();i++)
      {
        product[i]=prefix[i]*suffix[i];
      }
    return product;

    }
};
