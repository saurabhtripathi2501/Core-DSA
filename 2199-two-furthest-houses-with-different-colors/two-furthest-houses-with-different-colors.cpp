class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxi=0;
        for(int i =0;i<n;i++){
            //comparing first house with every house from last
            if(colors[0]!=colors[n-i-1])maxi=max(maxi,n-i-1);
            //comparing last house with every house form start
            if(colors[n-1]!=colors[i])maxi=max(maxi,n-1-i);
        }
        return maxi;
    }
};