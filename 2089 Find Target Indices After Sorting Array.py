class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        output = []
        targetCount = 0
        smallerCount = 0
        for num in nums:
            if num < target:
                smallerCount += 1
            elif num == target: 
                targetCount += 1
        
        while targetCount > 0:
            output.append(smallerCount)
            smallerCount += 1
            targetCount -= 1
        
        return output