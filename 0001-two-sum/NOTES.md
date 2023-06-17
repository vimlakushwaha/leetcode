​
Lets Connect on LinkedIn (Leave a note) - https://www.linkedin.com/in/vimla_kushwaha/
**Problem Constraints**
Test cases written like more than one solution cannot exist. Either solution exist or not.
**Brute Force Approach**
Run two nested loops to check every possible pair of numbers in the given array to see if they add up to the target sum.
If they add up to the target sum return the indexes.
​
​
***DRY Run***
Suppose we have an array nums = [2, 7, 11, 15] and a target of target = 9. We want to find two numbers in nums that add up to target.
​
Initially, the unordered_map mp is empty. We start iterating through the array from left to right.
​
For the first element nums[0] = 2, we check if its complement target - nums[0] = 7 exists in the map by using the find() method. Since it does not exist in the map, we add the key-value pair (2, 0) to the map. The map now looks like this: {2: 0}.
​
For the second element nums[1] = 7, we check if its complement target - nums[1] = 2 exists in the map. Since it does exist in the map, we return the indices mp[2] = 0 and i = 1 as a vector {0, 1}.
​
Therefore, the code returns the expected output of [0, 1], indicating that the indices of the two elements that add up to the target are 0 and 1.
​
​
**In python i wrote code below** and c++ code is there in code section
​
```
class Solution:
def twoSum(self, nums:List[int], target:int)-> List[int]:
d = {}
for i in range(len(nums)):
d[nums[i]] = i
if (target-nums[i]) in d:
return([i.d[i]])
```