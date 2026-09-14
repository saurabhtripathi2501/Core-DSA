class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int costPrice = prices[0];
        int maxProfit = 0;
        for(int i=1;i<prices.size();i++){
            int sellingPrice = prices[i];
            int profit = sellingPrice - costPrice;
            maxProfit = max(maxProfit,profit);
            costPrice = min(costPrice,prices[i]);
        }
        return maxProfit;
    }
};