class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (r > l) {
            while (l < s.length() && !isalnum(s[l])) {
                l++;
            }

            while (r >= 0 && !isalnum(s[r])) {
                r--;
            }

            if (toupper(s[r]) != toupper(s[l])) {
                return false;
            }

            r--;
            l++;
        }

        return true;
    }
};