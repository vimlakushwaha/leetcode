#User function Template for python3

class Solution:
    def findK(self,A, n, m, k):
        MAX = 100
     
        if (n < 1 or m < 1):
            return -1
        if (k <= m):
            return A[0][k - 1]
        if (k <= (m + n - 1)):
            return A[(k - m)][m - 1]
        if (k <= (m + n - 1 + m - 1)):
            return A[n - 1][m - 1 - (k - (m + n - 1))]
        if (k <= (m + n - 1 + m - 1 + n - 2)):
            return A[n - 1 - (k - (m + n - 1 + m - 1))][0]
         
         
        A.pop(0)
        [j.pop(0) for j in A]
        return self.findK(A, n - 2, m - 2, k - (2 * n + 2 * m - 4))
        # Write Your Code here


#{ 
 # Driver Code Starts

#Initial Template for Python 3

for _ in range(int(input())):
    n, m, k = map(int,input().split())
    a = [
            list(map(int,input().split()))
            for _ in range(n)
        ]
    
    ob = Solution()
    print(ob.findK(a,n,m,k))
    
# } Driver Code Ends