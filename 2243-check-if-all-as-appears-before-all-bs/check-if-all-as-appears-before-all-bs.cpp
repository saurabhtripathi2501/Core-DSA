class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int aMax = INT_MIN;
        int bMin = INT_MAX;
        for(int i = 0; i<n ;i++){
            if(s[i]=='a') aMax = max(aMax,i);
            else bMin = min(bMin,i);
        }
        if(aMax<bMin) return true;
        return false;
    }
};