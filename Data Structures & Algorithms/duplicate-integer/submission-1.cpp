class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;

        for (auto n : nums) {
            if (set.find(n) != set.end()) {
                return true;
            }

            set.insert(n);
        }

        return false;
    }
};