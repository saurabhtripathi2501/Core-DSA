class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i = 0; i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int mapSize = mpp.size();
        unordered_set<int>st;
        for(auto it:mpp){
            st.insert(it.second);
        }
        int setSize = st.size();
        return mapSize==setSize;
    }
};