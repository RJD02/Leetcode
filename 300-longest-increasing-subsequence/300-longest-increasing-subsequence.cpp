class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i] and dp[i] < 1 + dp[j])
                    dp[i] = 1 + dp[j];
            }
        }
        int maxVal = 0;
        for(auto i: dp)
            maxVal = max(maxVal, i);
        return maxVal;
    }
};