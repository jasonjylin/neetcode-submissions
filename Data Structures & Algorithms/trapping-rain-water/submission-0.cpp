class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) { return 0; }
        int l = 0, r = height.size() - 1;

        int total = 0;

        int maxL = height[l];
        int maxR = height[r];

        while (r > l) {
            if (maxL > maxR) {
                r--;
                maxR = max(maxR, height[r]);
                total += maxR - height[r];
            } else {
                l++;
                maxL = max(maxL, height[l]);
                total += maxL - height[l];
            }
        }

        return total;
    }
};
