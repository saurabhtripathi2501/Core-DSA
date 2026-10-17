class Solution {
public:
    int getDigitSum(int num){
        int sum = 0;
        while(num){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }


    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int>afterSorting(nums);

        auto lambda = [&](int num1,int num2) {
            int digitSumNum1 = getDigitSum(num1);
            int digitSumNum2 = getDigitSum(num2);

            if(digitSumNum1 != digitSumNum2) return digitSumNum1 < digitSumNum2;
            return num1 < num2;
        };

        sort(begin(afterSorting),end(afterSorting),lambda);

        unordered_map<int,int>mpp;
        for(int i = 0 ; i<n ; i++) mpp[nums[i]] = i;

        int totalSwaps = 0;
        for(int i = 0; i<n ; i++){
            int expected = afterSorting[i];
            int current = nums[i];
            if(expected ==current) continue;

            int index = mpp[expected];

            nums[i] = expected;
            nums[index] = current;
            mpp[expected] = i;
            mpp[current] = index;

            totalSwaps++;
            
        }
        return totalSwaps;
    }
};