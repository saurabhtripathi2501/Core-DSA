class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int i;
        if(n==maxi+1){
            sort(nums.begin(),nums.end());
            if(maxi==1){
                if(nums[0]==1&&nums[1]==1) return true;
                else return false;
            }
            else if(maxi>1){
                int cnt = 1;
                for(i=0;i<=maxi-2;i++){
                    if(nums[i]==cnt){
                        cnt++;
                    }
                    else return false;
                }
                if(nums[i]==maxi && nums[i+1]==maxi)return true;
                else return false;
            }
        }
        return false;
    }
};