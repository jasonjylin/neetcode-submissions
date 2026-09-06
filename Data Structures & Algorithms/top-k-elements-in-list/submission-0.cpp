class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;

        for (int num : nums) {
            freqs[num]++;
        }

        // arr[i] contains numbers that appear i times
        vector<vector<int>> arr(nums.size() + 1);

        for (const auto& [num, freq] : freqs) {
            arr[freq].push_back(num);
        }

        vector<int> res;
        int count = 0;

        for (int i = nums.size(); i >= 1; --i) {
            for (int num : arr[i]) {
                res.push_back(num);
                ++count;

                if (count == k) {
                    return res;
                }
            }
        }

        return res;
    }
};