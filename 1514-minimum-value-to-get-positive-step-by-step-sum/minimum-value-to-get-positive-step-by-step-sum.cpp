class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int i,j ;
        for(i = 1; i<INT_MAX; i++){
            sum += i;
            for(j=0; j<n ;j++){
                sum += nums[j];
                if(sum<1) break;
            }
            if(j==n) break;
            else sum = 0;
        }
        return i;
    }
};