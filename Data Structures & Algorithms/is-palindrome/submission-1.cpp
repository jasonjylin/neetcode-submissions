class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (r > l && !isalnum(s[r])) {
                r--;
            }
            if (toupper(s[l]) != toupper(s[r])) {
                return false;
            }
            l++; r--;
        }
        return true;
    }
};