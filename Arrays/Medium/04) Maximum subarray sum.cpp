class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];       // stores the best sum
        int currentSum = 0;         // running sum

        for (int x : nums) {
            currentSum += x;        // add current element

            // update maxSum
            maxSum = max(maxSum, currentSum);

            // if current sum becomes negative, reset it
            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;
    }
};
