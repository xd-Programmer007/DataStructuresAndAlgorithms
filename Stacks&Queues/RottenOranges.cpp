// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
  vector<pair<int, int>> dxy{{-1,0}, {1,0}, {0,-1}, {0,1}};
   int dist[501][501];    
   
   bool isValid(int x, int y, int m, int n){
       if(x>=0 and x<m and y>=0 and y<n) return true;
       else return false;
   }
   
   void bfs(vector<vector<int>>& grid){
       queue<pair<int, int>> q;
       
       for(int i=0; i<grid.size(); i++){
           for(int j=0; j<grid[0].size(); j++){
               if(grid[i][j]==2){
                   q.push({i, j});
                   dist[i][j]=0;
                   }
           }
       }
       
       dist[q.front().first][q.front().second]=0;
       
       while(!q.empty()){
           pair<int,int>node(q.front().first, q.front().second); q.pop();
           
           for(auto it:dxy){
               int nx = node.first + it.first; int ny = node.second + it.second;
               if(isValid(nx, ny, grid.size(), grid[0].size())  and grid[nx][ny]==1){
                   q.push({nx, ny});
                   
                   int new_dist = dist[node.first][node.second] + 1;
                   dist[nx][ny] = min(new_dist, dist[nx][ny]);
                   
                   grid[nx][ny] = 2;
          
                   
               }
           }
           
       }
       
   }
   
   int orangesRotting(vector<vector<int>>& grid) {
       
       int m = grid.size(); int n = grid[0].size();
       
       for(int i=0; i<m; i++){
           for(int j=0; j<n; j++){
           dist[i][j]=INT_MAX;
           }
       }

       bfs(grid);


       int max_time{INT_MIN};
       
       for(int i=0; i<m; i++){
           for(int j=0; j<n; j++){
               if(grid[i][j]==1) return -1;
               if(grid[i][j]!=0 and dist[i][j]>max_time) max_time = dist[i][j];
           }
       }

       return max_time;
       
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends