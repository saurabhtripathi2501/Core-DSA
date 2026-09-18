class Solution {
public:
    bool isPossible(vector<int>& bloomDay,int m , int k , int days){
        int cnt = 0;
        int noOfBouquets = 0;
        for(int i = 0 ; i<bloomDay.size(); i++){
            if(bloomDay[i]<=days)cnt++;
            else{
                noOfBouquets += cnt/k;
                cnt=0;
            }
        }
        noOfBouquets += cnt/k;
        if(noOfBouquets>=m) return true;
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k>bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = low + (high - low)/2;
            if(isPossible(bloomDay,m,k,mid)) high = mid -1;
            else low = mid+1;
        }
        return low;
    }
};