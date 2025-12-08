class Solution {
public:
    vector<int> findLeaders(vector<int>& nums) {
        vector<int> leaders;
        int n = nums.size();
        
        int maxRight = INT_MIN;
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > maxRight) {
                leaders.push_back(nums[i]);
                maxRight = nums[i];
            }
        }

        // Reverse to maintain original order
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};
