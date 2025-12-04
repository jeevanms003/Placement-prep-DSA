class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        unordered_map<int, int> mp;  // prefixSum → first index
        int prefix = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];

            // Case 1: Entire subarray from 0 to i sums to k
            if (prefix == k) {
                maxLen = i + 1;
            }

            // Case 2: prefix - k exists → subarray found
            if (mp.find(prefix - k) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefix - k]);
            }

            // Store prefix sum only if not already stored
            if (mp.find(prefix) == mp.end()) {
                mp[prefix] = i;
            }
        }

        return maxLen;
    }
};
