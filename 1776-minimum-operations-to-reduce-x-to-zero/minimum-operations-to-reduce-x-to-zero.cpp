class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int maxLen = -1;
        int sum = 0;
        for(int i = 0; i<n ; i++){
            sum += nums[i];
        }
        int required = sum-x;
        if(required<0) return -1;
        if(required == 0) return n;
        int i = 0; 
        int j = 0;
        int sum1 = nums[i];
        while (j < n ){
            if(sum1==required) maxLen = max(maxLen,(j-i+1));
            if(sum1<required){
                j++;
                if(j<n)sum1 += nums[j];
            }
            else{
                sum1 -= nums[i];
                i++;
            }
        }
        if(maxLen==-1) return -1;
        else return n-maxLen;  
    }
};