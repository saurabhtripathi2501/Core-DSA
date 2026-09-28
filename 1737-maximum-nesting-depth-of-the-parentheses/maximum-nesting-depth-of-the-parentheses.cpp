class Solution {
public:
    int maxDepth(string s) {
        int len = s.size();
        int ans = 0;
        int count = 0;
        for(int i = len - 1; i>=0; i--){
            if(s[i] == ')'){
                count ++;
                ans = max(ans,count);
            }
            else if(s[i]=='(') count --;
        }
        return ans;
    }
};