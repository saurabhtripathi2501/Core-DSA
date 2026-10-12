class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n ; i++){
            for (int j = i ; j< n; j++){
                int prev = -1;
                bool flag = true;

                for(int k = 0 ; k<n;k++){
                    //skip the subarray that is need to remove form the original array
                    if(k>= i && k<=j) continue;
                    
                    if(prev != -1 && nums[prev] >= nums[k]){
                        flag = false;
                        break;
                    } 
                    prev = k;
                }
                if(flag==true) count ++;
            }
        }
        return count;
    }  
};