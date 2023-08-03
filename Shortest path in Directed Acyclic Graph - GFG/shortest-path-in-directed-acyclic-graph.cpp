//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<int> ans(N,0);
        int vis[N]={0};
        ans[0]=0;
        for(auto x:edges){
            if(ans[x[1]]==0 && (vis[x[0]]||x[0]==0)){
             ans[x[1]]=ans[x[0]]+x[2];
                vis[x[1]]=1;
            }
             else if(vis[x[0]]){
            ans[x[1]]=min(ans[x[1]],ans[x[0]]+x[2]);
                 
             }
        }
        for(int i=1;i<N;i++)
         if(ans[i]==0)
            ans[i]=-1;
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends