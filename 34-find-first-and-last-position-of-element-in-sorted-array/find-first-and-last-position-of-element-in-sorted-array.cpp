class Solution {
public:
    int findFirstIndex(vector<int>&nums,int target){
        int ans=-1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]==target){
                ans = mid;
                high = mid -1;
            }
            else high = mid -1;
        }
        return ans;
    }
public:
    int findSecondIndex(vector<int>&nums,int target){
        int ans = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]==target){
                ans = mid;
                low=mid+1;
            }
            else high = mid -1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int firstInd = findFirstIndex(nums,target);
        ans[0]=firstInd;
        if(firstInd!=-1){
            int secondInd = findSecondIndex(nums,target);
            ans[1]=secondInd;
        }
        else{
            ans[1]=-1;
        }
        return ans;
    }
};