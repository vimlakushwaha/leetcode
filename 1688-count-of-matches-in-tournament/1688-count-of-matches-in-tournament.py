class Solution:
    def numberOfMatches(self, n: int) -> int:
        matches,sum_A =[],0
        while n !=1:
            if n%2==0:
                #print(n//2)
                matches.append(n//2)
                n = n//2
            else:
                #print("else",(n-1)//2)
                matches.append((n-1)//2)
                n = n-(n//2)
        for i in matches:
            sum_A +=i
        return sum_A