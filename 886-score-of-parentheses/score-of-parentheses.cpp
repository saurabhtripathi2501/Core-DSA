class Solution {
public:
    int scoreOfParentheses(string s) {
        int answer = 0;
        int depth = 0;
        for(int i = 0; i<s.size();i++){
            if(s[i] == '(') depth ++;
            else {
                if(s[i] == ')' && s[i-1]== '('){
                    answer += pow(2,depth-1);
                }
                depth--;
            }
        }
        return answer;
    }
};