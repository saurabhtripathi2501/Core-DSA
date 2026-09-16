class Solution {
public:
    int arrangeCoins(int n) {
        int cntRows = 0;
        int coin = 1;
        while (n){
            if(n>=coin){
                n -= coin;
                coin++;
                cntRows++;
            }
            else break;
        }
        return cntRows;
    }
};