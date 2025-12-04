class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int x : nums) {
            if (x == 1) {
                count++;            // keep increasing streak
                maxCount = max(maxCount, count);
            } else {
                count = 0;          // reset when 0 appears
            }
        }

        return maxCount;
    }
};
