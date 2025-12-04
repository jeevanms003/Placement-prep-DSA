class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int x : nums) {
            actualSum += x;
        }

        return expectedSum - actualSum;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorVal = 0;

        // XOR with all numbers from 0 to n
        for (int i = 0; i <= n; i++) {
            xorVal ^= i;
        }

        // XOR with all elements of the array
        for (int x : nums) {
            xorVal ^= x;
        }

        return xorVal;  // final XOR is the missing number
    }
};
