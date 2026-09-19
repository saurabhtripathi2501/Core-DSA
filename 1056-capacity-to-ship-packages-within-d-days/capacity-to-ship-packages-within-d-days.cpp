class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        for ( int i = 0; i< weights.size(); i++) high += weights[i];
        while ( low <= high){
            int mid = low + (high - low )/2; 
            int count = 1;
            int load = 0;
            for ( int i = 0; i< weights.size();i++){
                
                if(load + weights[i]>mid){
                    count +=1;
                    load = weights[i];
                }
                else load += weights[i];
            }
            if(count <= days) high =mid-1;
            else low = mid+1;
        }
        return low ;
        
    }
};