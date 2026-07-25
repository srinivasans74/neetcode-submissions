class Solution {
public:

    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int> seta;
        for (auto it =nums.begin(); it!=nums.end();it++)
        {
                if (seta.count(*it)>0){

                    return true;
                }
            //seta[*it]++;
            seta.insert(*it);
        }

        return false;

    }
};