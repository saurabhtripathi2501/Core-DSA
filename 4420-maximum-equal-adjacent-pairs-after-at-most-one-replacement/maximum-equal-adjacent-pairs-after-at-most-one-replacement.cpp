class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int existingPairs = 0;
        map<pair<int,int>,int>mpp;
        for(int i = 0 ; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) existingPairs ++;
            else{
                int a = min(nums[i],nums[i+1]);
                int b = max(nums[i],nums[i+1]);
                mpp[{a,b}] ++;
            }
        }
        int newPairs = 0;

        for(auto& it : mpp){
            newPairs = max(newPairs,it.second);
        }

        return existingPairs + newPairs;
    }
};