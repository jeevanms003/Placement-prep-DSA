class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  // value → index

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            // If the number we need is already in map
            if (mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            // Otherwise store current number with its index
            mp[nums[i]] = i;
        }

        return {}; // no solution (won’t happen in LeetCode)
    }
};
