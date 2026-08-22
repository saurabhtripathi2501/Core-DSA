class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n ;
        int sum = 0;
        int pro = 1;
        while (n){
            int last = n % 10;
            n = n / 10;
            sum += last;
            pro *= last;
        }
        int finalSum = sum + pro; 
        if (temp % finalSum == 0) return true;
        return false;
    }
};