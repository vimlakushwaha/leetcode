class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        dicti = {}
        for i in nums:
            if i not  in dicti:
                dicti[i] = 1
            else:
                dicti[i] += 1
        n = len(nums)
        res = []
        for i in dicti:
            if dicti[i] > n//3:
                res.append(i)
        return res