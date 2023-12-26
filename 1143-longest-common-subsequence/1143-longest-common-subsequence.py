class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        s1,s2 =text1,text2
        m = len(s1)
        n = len(s2)
        dp = [[-1 for _ in range(n + 1)] for _ in range(m + 1)]
        for i in range(len(s2)+1):
            dp[0][i] = 0
        for i in range(len(s1)+1):
            dp[i][0] = 0
        for i in range(1,len(s1)+1):
            for j in range(1,len(s2)+1):
                if(s1[i-1]==s2[j-1]):
                    dp[i][j] = 1+dp[i-1][j-1]
                else:
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1])
        return(dp[-1][-1])