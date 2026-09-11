class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        set <int > st;
        for(int i = 0; i<n ;i++){
            for(int j = 0; j<n ; j++){
                for(int k = 0 ; k< n ; k++){
                    if(i!=j && i!=k && j!=k){
                        int firstDigit = digits[i];
                        int secondDigit = digits[j];
                        int thirdDigit = digits[k];
                        if(firstDigit != 0 && thirdDigit%2==0){
                            int number= firstDigit*100+secondDigit*10+thirdDigit;
                            st.insert(number);
                        }
                    }
                }
            }
        }
        return st.size();
    }
};