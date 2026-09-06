class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // 1, 2, 3, 4, 5
        // 1, 1, 1, 1, 1
        // 1, 1, 2, 6, 24
        // 120, 60, 20, 5, 1

        int size = nums.size();

        vector<int> pre(size, 1);
        //vector<int> post(size, 1);

        for (int i = 1; i < size; ++i) {
            pre[i] = pre[i - 1] * nums[i - 1];
        }


        int post = 1;
        for (int i = size - 2; i >= 0; --i) {
            post = post * nums[i+1];
            pre[i] = post * pre[i];
            //post[i] = post[i + 1] * nums[i + 1];
        }

        // for (int i = 0; i < size; ++i) {
        //     pre[i] = pre[i] * post[i];
        // }

        return pre;
    }
};
