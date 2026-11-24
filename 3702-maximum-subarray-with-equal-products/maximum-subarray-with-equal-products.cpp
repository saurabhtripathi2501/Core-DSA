class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0; i<n ; i++){
            long long GCD = 0;
            long long LCM = 1; 
            long long prod = 1;
            for(int j = i ; j<n; j++){
                if (prod > LLONG_MAX / nums[j]) break;
                GCD = gcd(GCD,(long long)nums[j]);
                LCM = lcm(LCM,(long long)nums[j]);
                prod = 1LL*prod * nums[j];
                if(prod ==GCD*LCM) ans = max(ans,j-i+1);
            }
        }
        return ans;
    }
};