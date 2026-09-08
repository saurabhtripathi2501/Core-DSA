class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i = 0;i<nums.size(); i++){
            int sum = 0;
            while(nums[i]){
                sum += nums[i] % 10;
                nums[i] /= 10;
            }
            nums [i] = sum;
        }
        return *min_element(nums.begin(),nums.end());
    }
};