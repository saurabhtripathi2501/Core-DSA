class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        vector<int>temp(arr);
        sort(temp.begin(),temp.end());
        
        unordered_map<int,int>mpp;
        int i = 0;
        int rank = 1;
        while(i<temp.size()){
            int el = temp[i];
            if(mpp.find(el)!=mpp.end()) {
                i++;
                continue;
            }
            else{
                mpp[el] = rank;
                rank++;
            }
            i++;
        }
        for(int i = 0;i<arr.size();i++){
            int element = arr[i];
            ans.push_back(mpp[element]);
        }
        return ans;

    }
};