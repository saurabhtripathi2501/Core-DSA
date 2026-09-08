class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        for(int i = nums.size()-1;i>=0;i--){
            int n=nums[i];
            while(n){
                int rem = n%10;
                answer.push_back(rem);
                n /=10;
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};