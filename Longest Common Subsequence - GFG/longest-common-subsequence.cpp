//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    vector<vector<int>> dp;
    int util(string &s1,string &s2,int i, int j){
        if(i>=s1.size() || j>=s2.size())
            return 0;
            
        if(dp[i][j] != -1)
            return dp[i][j];
            
        if(s1[i]==s2[j])
            return dp[i][j] = 1 + util(s1,s2,i+1,j+1);
        
        
        return dp[i][j] = max(util(s1,s2,i+1,j) , util(s1,s2,i,j+1));
    }
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        dp.resize(n,vector<int>(m,-1));//resize the dp
        
        return util(s1,s2,0,0);
    }
};

//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends