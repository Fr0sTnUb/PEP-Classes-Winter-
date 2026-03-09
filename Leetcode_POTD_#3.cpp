//Leetcode Problem 3129: Find All Possible Stable Arrays I . Date: 2026-03-09

class Solution {
public:
    int numberOfStableArrays(int zero, int one, int limit) {
        const int MOD = 1e9 + 7;
        vector<vector<array<long long,2>>> dp(zero+1, vector<array<long long,2>>(one+1, {0,0}));
        
        for (int i = 1; i <= min(zero, limit); i++) dp[i][0][0] = 1;
        for (int j = 1; j <= min(one,  limit); j++) dp[0][j][1] = 1;
        
        for (int i = 1; i <= zero; i++) {
            for (int j = 1; j <= one; j++) {
                dp[i][j][0] = (dp[i-1][j][0] + dp[i-1][j][1]) % MOD;
                if (i - limit - 1 >= 0)
                    dp[i][j][0] = (dp[i][j][0] - dp[i-limit-1][j][1] + MOD) % MOD;
                
                dp[i][j][1] = (dp[i][j-1][0] + dp[i][j-1][1]) % MOD;
                if (j - limit - 1 >= 0)
                    dp[i][j][1] = (dp[i][j][1] - dp[i][j-limit-1][0] + MOD) % MOD;
            }
        }
        
        return (dp[zero][one][0] + dp[zero][one][1]) % MOD;
    }
};

// The idea is to use dynamic programming to count the number of stable arrays that can be formed with a given number of zeros and ones, while respecting the limit on consecutive elements. We maintain a 3D DP array where dp[i][j][0] represents the number of stable arrays with i zeros and j ones that end with a zero, and dp[i][j][1] represents those that end with a one. We iterate through all possible counts of zeros and ones, updating our DP array based on the previous counts while ensuring we do not exceed the limit for consecutive elements. Finally, we return the sum of both cases for the total count of stable arrays.