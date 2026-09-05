class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        
    int n = nums.size();

        // Start with the first possible i
        int maxLeft = nums[0];

        // Minimum possible answer
        int ans = INT_MIN;

        for (int j = k; j < n; j++) {

            // i = j - k becomes available
            maxLeft = max(maxLeft, nums[j - k]);

            // Use the largest valid nums[i]
            ans = max(ans, maxLeft + nums[j]);
        }

        return ans;
    }
};