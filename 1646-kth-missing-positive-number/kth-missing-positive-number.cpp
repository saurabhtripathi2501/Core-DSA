class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ind = 0;
        int cnt = 1;
        while(ind < arr.size()){
            if(k==0) return cnt -1;
            if(arr[ind]!=cnt){
                k--;
                cnt++;
            }
            else{
                cnt++;
                ind++;
            }
        }
        return cnt-1+k;
    }
};