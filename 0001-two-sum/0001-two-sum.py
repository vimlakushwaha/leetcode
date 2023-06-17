class Solution1:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        '''for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                x = target - nums[i]
                if nums[j]==x:
                    return([i,j])'
        n=len(nums)
        d={}

        for i in range(n):
            d[nums[i]]=i
        
        for j in range(len(d)):
            x=nums[j]
            y=target-x
            if y in d:
                if j != d[y]:
                    return([j,d[y]])'''
        n=len(nums)
        d={}
        for i in range(n):
            d[nums[i]]=i
            if (target - nums[i]) in d:
                return([i,d[i]])


class Solution:
        def twoSum(self, nums: List[int], target: int) -> List[int]:
                
            d = {}
            for i, j in enumerate(nums):
                    r = target - j
                    if r in d: return [d[r], i]
                    d[j] = i
                                                                    		

                
