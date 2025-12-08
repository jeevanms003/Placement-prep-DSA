class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // 1) Find the first index from right where nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // If such index exists
        if (i >= 0) {
            int j = n - 1;
            // 2) Find element just larger than nums[i] on right side
            while (nums[j] <= nums[i]) {
                j--;
            }
            // 3) Swap them
            swap(nums[i], nums[j]);
        }

        // 4) Reverse the suffix (i+1 to end)
        reverse(nums.begin() + i + 1, nums.end());
    }
};
