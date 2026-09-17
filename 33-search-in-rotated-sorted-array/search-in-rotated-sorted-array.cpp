class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while (low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[low]<=nums[mid]){     //left wala part sorted hai
                
                if(nums[low]<=target&&target<nums[mid]) high = mid -1; // target left me hai
                else low = mid+1;  //target right me hai
                
            }
            else{        //right wala part sorted hai
                
                if(nums[mid]<target && target<=nums[high]) low = mid+1; //target right me hai
                else high = mid -1;  //target left me hai
            }
        }
        return -1;
    }
}; 