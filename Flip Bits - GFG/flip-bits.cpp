//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int solve(int a[],int n,int i,int v,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][v]!=-1){
            return dp[i][v];
        }
        int ans=0;
        if(v==0){
            if(a[i]==1){
                ans=1+solve(a,n,i+1,v,dp);
            }else{
                ans=max(1+solve(a,n,i+1,1,dp),solve(a,n,i+1,v,dp));
            }
        }
        else if(v==1){
            if(a[i]==1){
                ans=max(solve(a,n,i+1,v,dp),1+solve(a,n,i+1,2,dp));
            }else{
                ans=1+solve(a,n,i+1,v,dp);
            }
        }
        else if(v==2){
            if(a[i]==1){
                ans=1+solve(a,n,i+1,v,dp);
            }else{
                ans=solve(a,n,i+1,v,dp);
            }
        }
        
        return dp[i][v]=ans;
    }
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return solve(a,n,0,0,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends