class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n1 = pattern.size();
        int n2 = s.size();

        unordered_map<char, string> mpp;
        int j = 0;

        for (int i = 0; i < n1; i++) {
            if (j >= n2) return false;

            char ch1 = pattern[i];
            string str = "";

            while (j < n2 && s[j] != ' ') {
                str += s[j];
                j++;
            }

            if (mpp.find(ch1) == mpp.end()) {
                // Check if another character already maps to this word
                for (auto it : mpp) {
                    if (it.second == str) return false;
                }
                mpp[ch1] = str;
            }
            else if (mpp[ch1] != str) {
                return false;
            }

            j++;
        }

        // Ensure there are no extra words
        return j >= n2 + 1;
    }
};