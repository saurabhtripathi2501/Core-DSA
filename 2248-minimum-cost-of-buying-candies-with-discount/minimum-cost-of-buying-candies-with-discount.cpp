class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n = cost.size();
        int i = n-1;
        int amount = 0;
        while (i>=0){
            amount += cost[i];
            if((i-1) >=0){
                i--;
            }
            else break;
            amount += cost[i];
            if((i-1) >=0){
                i--;
            }
            else break;
            if((i-1) >=0){
                i--;
            }
            else break;
        }
        return amount;
    }
};