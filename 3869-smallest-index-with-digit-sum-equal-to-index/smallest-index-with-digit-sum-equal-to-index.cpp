class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i< nums.size();i++){
            int sum = 0;
            while(nums[i]){
                int last = nums[i]%10;
                sum += last;
                nums[i] /=10;
            }
            if (sum==i) return i;
        }
        return -1;
    }
};