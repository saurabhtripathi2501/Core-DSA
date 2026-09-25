class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int left =0;
        int right = n-1;
        while(left<right){
            int waterContent = (right-left) * (min(height[left],height[right]));
            ans = max(ans,waterContent);
            if(height[right]<height[left]) right--;
            else left++;
        }
        return ans;
    }
};