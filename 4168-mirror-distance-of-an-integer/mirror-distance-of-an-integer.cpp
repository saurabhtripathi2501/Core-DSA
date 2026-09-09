class Solution {
public:
    int mirrorDistance(int n) {
        int x =n;
        int rev=0;
        while (n){
            int rem = n %10;
            rev = rev*10+rem;
            n/=10;
        }
        return abs(x-rev);
    }
};