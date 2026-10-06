class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int ans = 0;
        int depth = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                depth++;
            }

            else if (s[i] == ')') {
                depth--;
                if (depth < 0) {
                    ans += 1;
                    depth = 0;
                }
            }
        }
        ans += depth;
        return ans;
    }
};