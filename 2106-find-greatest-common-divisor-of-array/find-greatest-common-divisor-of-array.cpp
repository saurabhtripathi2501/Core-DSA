class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        int i ;
        for(i = mn ; i>=1 ; i--){
            if (mn%i==0 && mx%i==0) break;
        }
        return i ;
    }
};