class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxi = INT_MIN;
        int n = points.size();
        for(int i = 0; i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    double a = points[i][0]*(points[j][1]-points[k][1]);
                    double b = points[j][0]*(points[k][1]-points[i][1]);
                    double c = points[k][0]*(points[i][1]-points[j][1]);
                    double ans = abs(a+b+c)/2;
                    maxi=max(maxi,ans);
                }
            }
        }
        return maxi;
    }
};