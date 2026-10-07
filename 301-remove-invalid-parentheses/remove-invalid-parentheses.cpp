class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;

        remove(s, ans, 0, 0, {'(', ')'});

        return ans;
    }

private:
    void remove(string s, vector<string>& ans,
                int i, int j, vector<char> p) {

        int count = 0;

        // Find the first position where the string becomes invalid
        for (int k = i; k < s.size(); k++) {

            if (s[k] == p[0])
                count++;

            if (s[k] == p[1])
                count--;

            // Found an extra closing parenthesis
            if (count < 0) {

                // Try removing each possible offending parenthesis
                for (int x = j; x <= k; x++) {

                    // Avoid duplicate removals
                    if (s[x] == p[1] &&
                        (x == j || s[x - 1] != p[1])) {

                        // Remove s[x] and solve recursively
                        remove(
                            s.substr(0, x) + s.substr(x + 1),
                            ans,
                            k,
                            x,
                            p
                        );
                    }
                }

                // We handled this imbalance
                return;
            }
        }

        // No extra ')' found.
        // Now check for extra '(' by reversing.
        string rev(s.rbegin(), s.rend());

        if (p[0] == '(') {

            remove(
                rev,
                ans,
                0,
                0,
                {')', '('}
            );

        } else {

            // Both directions are valid,
            // so this is a valid final answer.
            ans.push_back(rev);
        }
    }
};