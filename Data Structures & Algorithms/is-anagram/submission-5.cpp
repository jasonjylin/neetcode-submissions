class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> counts(26, 0);

        for (int i = 0; i < s.length(); i++) {
            counts[s[i] - 'a'] += 1;
            counts[t[i] - 'a'] -= 1;
        }

        for (auto i : counts) {
            if (i != 0) {
                return false;
            }
        }

        return true;
    }
};
