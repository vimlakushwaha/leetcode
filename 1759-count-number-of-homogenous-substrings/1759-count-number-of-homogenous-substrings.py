class Solution:
    def countHomogenous(self, s: str) -> int:
        '''sb = [i for i in s]#homogeneous substring  of any length
        
        return(len(sb)%(1e8+7))'''

        mod = 10**9+7
        c = 1
        prv = s[0]
        res = 1
        for ch in s[1:]:
            if ch == prv:
                c+=1
            else:
                c = 1
                prv = ch
            res+=c
            res %= mod
        return res