class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int maxEle = *max_element(nums.begin(),nums.end());
        vector<int>hashmap(maxEle+1);

        for(int i = 0; i<n; i++){
            hashmap[nums[i]]++;
        }

        while(ans.size()!=n){
            for(int i = 1; i<hashmap.size(); i++){
                if(hashmap[i]!=0){
                    ans.push_back(i);
                    hashmap[i]--;
                }
            }
        }
        return ans;
    }
};