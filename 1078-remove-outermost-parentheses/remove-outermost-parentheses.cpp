class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int count = 0;
        int i = 0;
        int start;
        int end;
        while(i<n){
            if(count == 0 && s[i]=='('){
                start = i;
                count ++;
                i++;
            }
            else if(s[i]=='(') {
                count ++; 
                i++;
            }
            else if(s[i]==')'){
                count --;
                if(count == 0){
                    end = i;
                    ans += s.substr(start + 1, end - start - 1); 
                }
                i++;
            }
        }
        return ans;
    }
};