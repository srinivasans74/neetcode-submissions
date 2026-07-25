class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

/*
vector <int> Solution::twoSum(vector<int>&nums, int target)
{
    vector<int>index;
    for (auto it =nums.begin();it!=nums.end()-1;it++)
    {
        for(auto itb=it+1;itb!=nums.end();itb++){
                if(*it+*itb==target){
                    std::cout<<"["<<std::distance(it,nums.begin())<<","<<std::distance(itb,nums.begin())<<"]";
                    index.push_back(std::abs(std::distance(it,nums.begin())));
                    index.push_back(std::abs(std::distance(itb,nums.begin())));
                }


        }

    }
    return index;}
*/

vector<int> Solution ::twoSum(vector<int>&nums, int target)
{
    std::unordered_map<int,int>list;
    //list[0]=nums[0];
    list[nums[0]]=0;
    std::vector<int>pos;
    for(auto it=nums.begin()+1;it!=nums.end();it++)
    {
        auto key=list.find(target-*it);
        if(key!=list.end()){
            pos.push_back(key->second);
            pos.push_back(std::distance(nums.begin(),it));
        }
        list[*it]=std::distance(nums.begin(),it);

    }
    return pos;

}
