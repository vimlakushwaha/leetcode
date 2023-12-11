class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        res = {}
        for i in range(len(arr)):
            if arr[i] not in res :
                res[arr[i]] = 1
            else:
                res[arr[i]] +=1
        maxv = 0
        for i in res:
            if res[i] > maxv:
                r= i
                maxv = res[i]
            #print(res[i],maxv)
        return r