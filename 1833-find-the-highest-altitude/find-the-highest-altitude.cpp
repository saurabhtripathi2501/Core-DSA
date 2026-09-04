class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector <int> altitudes;
        altitudes.push_back(0);
        for (int i =0; i< n ; i++){
            int sum = gain[i]+altitudes[i];
            altitudes.push_back(sum);
        }
        int maxi= *max_element(altitudes.begin(),altitudes.end());
        return maxi;
    }
};