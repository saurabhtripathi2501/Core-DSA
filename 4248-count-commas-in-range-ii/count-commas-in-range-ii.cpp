class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;

        else if(n<1000000) return n-999;

        else if(n<1000000000LL)return (2*(n-999999LL)+(999999LL-999LL));

        else if (n<1000000000000LL) return (3*(n-999999999LL)+2*(999999999LL-999999LL)+(999999LL-999LL));

        else if (n<1000000000000000LL) return (4*(n-999999999999LL)+3*(999999999999LL-999999999LL)+2*(999999999LL-999999LL)+(999999LL-999LL));
        
        else return (4*(999999999999999LL-999999999999LL)+3*(999999999999LL-999999999LL)+2*(999999999LL-999999LL)+(999999LL-999LL)+5);
    }
};