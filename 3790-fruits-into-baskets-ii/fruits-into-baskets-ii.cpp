class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n1= fruits.size();
        int n2 = baskets.size();
        int count = 0;
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n2 ; j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j] = 0;
                    count ++;
                    break;
                }
            }
        }
        return n1-count;
    }
};