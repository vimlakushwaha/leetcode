//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
       int n = grid.size(), m = grid[0].size();
       
        int vis[n][m] = {-1};
        queue<vector<int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    if(i == 0 || j==0 || i==n-1 || j==m-1){
                        q.push({i,j}); // start your bfs
                        vis[i][j]=1;
                        grid[i][j]=2;  // marking boundary cell 
                    }
                }
            }
        }
        
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                vector<int> top = q.front(); q.pop();
                int x = top[0];
                int y = top[1];
                
                int dx[4] = {0,0,1,-1};
                int dy[4] = {1,-1,0,0};
                
                for(int i=0;i<4;i++){
                    int nx = dx[i] + x;
                    int ny = dy[i] + y;
                    
                    if(nx < 0 || ny < 0 || nx >=n || ny>=m || vis[nx][ny] == 1 || grid[nx][ny] != 1){
                        continue;
                    }
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                    grid[nx][ny] =2;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                   cnt++;
                }
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends