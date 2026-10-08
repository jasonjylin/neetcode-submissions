class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;

        int res = 0;

        int l = 0;

        for (int r = 0; r < s.size(); ++r) {
            while (seen.contains(s[r]) && l < r) {
                seen.erase(s[l]);
                ++l;
            }

            const int len = r - l + 1;

            res = max(res, len);

            seen.insert(s[r]);
        }

        return res;
    }
};
