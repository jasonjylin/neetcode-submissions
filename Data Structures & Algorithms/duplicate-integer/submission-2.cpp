class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dups;

        for (auto i : nums) {
            if (dups.contains(i)) {
                return true;
            }

            dups[i] += 1;
        }

        return false;
    }
};