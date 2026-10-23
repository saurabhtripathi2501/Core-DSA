class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp; //storing elements which are incorrectly placed
        for(int i = 0; i<n ; i++){
            if(nums[i] != i ) temp.push_back(nums[i]);
        }

        int n1 = temp.size();
        if(n1==0) return 0;

        
        int ans=INT_MAX ;
        for(int i = 0; i<n1; i++){
            ans = ans & temp[i];
        } 
        return ans;
    }
};