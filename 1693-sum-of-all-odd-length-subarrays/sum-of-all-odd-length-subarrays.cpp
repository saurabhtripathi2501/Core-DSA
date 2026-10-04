class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int>prefix(n+1,0);
        int sum = 0;
        for(int i=0; i<n;i++){
            prefix[i] = sum;
            sum += arr[i];
        }
        prefix[n] = sum;


        int answer = 0;
        for(int i = 0 ; i<n; i++){
            for(int j = i ; j<n ; j++){
                int length = j-i+1;
                if(length % 2 == 1) answer += prefix[j+1] - prefix[i];
            }
        }
        return answer;

    }
};