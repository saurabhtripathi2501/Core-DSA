class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s = to_string(n);
        string a = "";
        for(int i =0 ; i<s.size(); i++){
            if(s[i]!='0') a+=s[i];
        }
        int x = stoi(a);
        int m = x;
        long long sum = 0;
        while(m){
            sum += m%10;
            m/=10;
        }
        return 1LL*x*sum;
    }
};