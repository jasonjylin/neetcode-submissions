class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()){
            return 0;
        }
        unordered_map<int, int> counts;
        for (auto num : nums) {
            counts[num]++;
        }

        int res = 1;
        for (auto num : nums) {
            if (counts.contains(num-1)) {
                continue;
            }

            int t = 1;
            int temp = num;
        
            while (counts.contains(temp + 1)) {
                ++t;
                ++temp;
            }

            res = max(res, t);
        }

        return res;
    }
};
