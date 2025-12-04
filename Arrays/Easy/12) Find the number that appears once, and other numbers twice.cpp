class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorVal = 0;

        for (int x : nums) {
            xorVal ^= x;   // XOR all elements
        }

        return xorVal;     // result is the single number
    }
};
