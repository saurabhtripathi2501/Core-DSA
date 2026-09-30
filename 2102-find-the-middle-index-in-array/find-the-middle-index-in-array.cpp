class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0 ;
        for(int i = 0; i<n ; i++) sum += nums[i];

        int leftSum = 0;
        for(int i = 0;i<n;i++){
            if(leftSum == sum-leftSum-nums[i]) return i ;
            else leftSum +=nums[i];
        }
        
        return -1;
    }
};