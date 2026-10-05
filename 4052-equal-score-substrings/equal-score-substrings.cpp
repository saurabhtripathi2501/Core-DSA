class Solution {
public:
    bool scoreBalance(string s) {
        int sum = 0;
        int n = s.size();
        vector<int>prefix(n+1,0);
        for(int i = 0; i<n ; i++){
            prefix[i] = sum;
            sum += (s[i]-'a')+1;
        }
        prefix[n] = sum ;


        //if total sum is even we will try to find if there is any value in the prefix sum half of it
        int totalSum = prefix[n];
        if(totalSum % 2 == 0){
            for(int i= 0; i<n;i++){
                if(prefix[i] == totalSum/2) return true;
            }
        }
        return false;
    }
};