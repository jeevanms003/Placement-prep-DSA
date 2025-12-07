class Solution {
public:
    pair<int, vector<int>> maxSubArrayWithElements(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = nums[0];

        int start = 0, end = 0;      // final subarray boundaries
        int tempStart = 0;           // start index of current subarray

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            // update best sum
            if (currentSum > maxSum) {
                maxSum = currentSum;
                start = tempStart;
                end = i;
            }

            // reset if currentSum becomes negative
            if (currentSum < 0) {
                currentSum = 0;
                tempStart = i + 1;   // new potential beginning
            }
        }

        // Store elements of the subarray
        vector<int> sub;
        for (int i = start; i <= end; i++) {
            sub.push_back(nums[i]);
        }

        return {maxSum, sub};
    }
};
