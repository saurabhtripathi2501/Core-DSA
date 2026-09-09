class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mini=INT_MAX;
        int n = words.size();
        for(int i = 0 ; i<n;i++){
            if(words[i]==target){
                int mini1= min(abs(i-startIndex),n-abs(i-startIndex));
                mini= min(mini,mini1);
            }
        }
        if (mini==INT_MAX)return -1;
        return mini;
    }
};