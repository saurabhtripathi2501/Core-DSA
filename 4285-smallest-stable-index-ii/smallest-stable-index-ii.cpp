class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi = INT_MIN;
        vector<int>suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for(int i = n-2; i>=0; i--){
            suffixMin[i] = min(nums[i],suffixMin[i+1]);
        }
        int i=0;
        while(i<=n-1){
            maxi = max(nums[i],maxi);
            int res = maxi-suffixMin[i];
            if (res  <= k){
                return i;
            }
            i++;
        }
        return -1;
    }
};