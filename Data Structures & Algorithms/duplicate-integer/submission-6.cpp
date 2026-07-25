class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int>x;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(x.count(*it)>0)
            {

                return true;
            }
            x.insert(*it);

        }
                        return false;

    }
};