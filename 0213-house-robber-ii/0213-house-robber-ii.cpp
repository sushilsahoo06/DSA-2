class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n== 1) return nums[0];
        vector<int>dp(n+1 , 0);

        dp[0]=0;
        // skip last house and take all
        for(int i=1;i<=n-1;i++){
            int skip=dp[i-1];
            int take=nums[i-1] + ((i-2 > 0) ?dp[i-2] : 0);

            dp[i]= max(skip , take);
        }
        int result_1 = dp[n-1];
        // skip frist house and take all 
        dp[0]=0;
        dp[1]=0;// frist house is 0;
        for(int i=2;i<=n;i++){
            int skip=dp[i-1];
            int take=nums[i-1] + ((i-2 > 0) ?dp[i-2] : 0);

            dp[i]= max(skip , take);
        }
        int result_2 = dp[n];

        return max(result_1 ,result_2 );

    }
};