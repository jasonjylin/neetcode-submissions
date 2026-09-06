class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;

        while (l < r) {
            if (numbers[r] + numbers[l] > target) {
                r--;
            } else if (numbers[r] + numbers[l] < target) {
                l++;
            } else {
                return vector<int>{l+1, r+1};
            }
        }

        return vector<int>{l+1, r+1};
    }
};
