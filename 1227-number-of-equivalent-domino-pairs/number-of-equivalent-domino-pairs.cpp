class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        int freq[100] = {};
        int ans = 0;
        for(int i = 0; i<n ; i++){
            int a = min(dominoes[i][0],dominoes[i][1]);
            int b = max(dominoes[i][0],dominoes[i][1]);
            int key = a*10+b;
            ans += freq[key];
            freq[key]++;
        }
        return ans;
    }
};