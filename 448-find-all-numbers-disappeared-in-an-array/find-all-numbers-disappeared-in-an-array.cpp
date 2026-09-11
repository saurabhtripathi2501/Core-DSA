class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int count = 1;

        for(int i = 0; i < nums.size(); i++) {
            
            if(nums[i] == count) {
                count++;
            }
            else if(nums[i] > count) {
                while(count < nums[i]) {
                    ans.push_back(count);
                    count++;
                }
                count++;
            }
            // if nums[i] < count, it is a duplicate → do nothing
        }

        while(count <= nums.size()) {
            ans.push_back(count);
            count++;
        }

        return ans;
    }
};