class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res = 0
        n = len(prices)
        mini = prices[0]
        for i in range(1,n):
            if(prices[i]<mini):
                mini = prices[i]
            else:
                res = max(res,prices[i]-mini)
        return res