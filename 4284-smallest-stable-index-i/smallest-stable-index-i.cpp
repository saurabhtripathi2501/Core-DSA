class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int flag = 0;
        int i ;
        for( i = 0 ; i<n ; i++){
            int maxi =*max_element(nums.begin(), nums.begin()+i+1);
            int mini1=*min_element(nums.begin()+i,nums.end());
            int res = maxi - mini1;
            if (res<= k ){
                flag= 1;
                break;
            }
        }
        if (flag==1) return i;
        return -1;
    }
};