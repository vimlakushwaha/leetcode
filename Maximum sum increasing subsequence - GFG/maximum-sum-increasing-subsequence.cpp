//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector <int> dp(n,1),ans(arr,arr+n);
for(int i = 1;i < n;i++){
    for(int j = 0;j < i;j++){
        if(arr[j] < arr[i] && dp[j] == dp[i]){
            dp[i]++;
            ans[i] = max(ans[i],arr[i]+ans[j]);
        }
    }
}
return *max_element(ans.begin(),ans.end());
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends