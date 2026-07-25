class Solution {
public:

    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_map<int,int>seenlist;
        for (auto it =nums.begin(); it!=nums.end();it++)
        {
                if (seenlist.count(*it)>0){

                    return true;
                }
            seenlist[*it]++;
        }

        return false;

    }
};