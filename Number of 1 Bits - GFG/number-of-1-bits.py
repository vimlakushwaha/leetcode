#User function Template for python3
class Solution:
	def setBits(self, N):
	    s = bin(N)
	    count= 0
	    bi = s[2::]
	    for i in str(bi):
	        if i == '1':
	            count+=1
	    return count
		# code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.setBits(N)
		print(ans)




# } Driver Code Ends