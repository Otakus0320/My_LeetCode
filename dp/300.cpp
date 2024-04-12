class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> dp(nums.size(), 1);
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[j] <nums[i])
                {
                    dp[i] = std::max(dp[i], dp[j]+1);
                }
            }
        }
        int ans=0;
        for(int k=0; k<dp.size(); k++)
        {
            if(dp[k] >ans) ans = dp[k];
        }
        return ans;
    }
};
