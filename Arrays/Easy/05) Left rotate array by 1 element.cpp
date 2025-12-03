class Solution {
public:
    void leftRotate(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return;

        int first = nums[0];

        for (int i = 0; i < n - 1; i++) {
            nums[i] = nums[i + 1];
        }

        nums[n - 1] = first;
    }
};
