class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        if(target[0]==source[0] && target[1]==source[1]) return 0;

        if(target[0]==source[0] || target[1]==source[1] || abs(target[0]-source[0])==abs(target[1]-source[1])) return 1;
        
        return 2;
    }
};