class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftSum;
        vector<int>rightSum;
        vector<int>answer;
        if (n==1){
            answer.push_back(0);
            return answer;
        }
        int sum=0;
        for(int i =0;i<n;i++){
            sum += nums[i];
        }
        int left=0;
        int right = sum -nums[0];
        leftSum.push_back(left);
        rightSum.push_back(right);
        for(int i = 1 ; i<n ; i++){
            
            left += nums[i-1];
            leftSum.push_back(left);
            right=sum-left-nums[i];
            rightSum.push_back(right);
        }
        for(int i = 0; i<n; i++){
            int res = abs(leftSum[i]-rightSum[i]);
            answer.push_back(res);
        }
        return answer;
    }
};