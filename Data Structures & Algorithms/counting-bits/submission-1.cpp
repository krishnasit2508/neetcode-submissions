class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int count = 0;
            int num = i;
            while (num > 0) {
                num &= (num - 1); // Clears the lowest set bit
                count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
