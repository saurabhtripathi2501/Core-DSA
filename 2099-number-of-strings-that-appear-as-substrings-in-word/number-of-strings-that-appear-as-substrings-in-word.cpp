class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int count =0;
        for(int i = 0; i<n ;i++){
            string sub = patterns[i];
            if(word.contains(sub)) count ++;
        }
        return count;
    }
};