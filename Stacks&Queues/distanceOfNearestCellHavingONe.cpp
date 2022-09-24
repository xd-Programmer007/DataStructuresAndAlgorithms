// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    vector<pair<int,int>> dxy{{-1,0},{1,0},{0,-1},{0,1}};
    vector<vector<int>> dist;
    
    bool isValid(int x,int y,int m,int n){
        if(x>=0 && x<m and y>=0 && y<n)return true;
        return false;
    }
    void bfs(vector<vector<int>>& grid){
            queue<pair<int,int>> q;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==1){
                        q.push({i,j});
                        dist[i][j]=0;
                    }
                }
            }
            dist[q.front().first][q.front().second]=0;
            while(!q.empty()){
                pair<int,int> node(q.front().first,q.front().second);
                q.pop();
                for(auto it:dxy){
                    int nx = node.first+it.first,ny = node.second+it.second;
                    if(isValid(nx,ny,grid.size(),grid[0].size()) and grid[nx][ny]!=1 ){
                        if(dist[nx][ny]==INT_MAX)
                            q.push({nx,ny});
                        int new_dist = dist[node.first][node.second]+1;
                        dist[nx][ny]= min(new_dist,dist[nx][ny]);
                        grid[nx][ny] = dist[nx][ny];
                    }
                }
            }
    }
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int m = grid.size(),n=grid[0].size();
        dist.resize(m,vector<int>(n));
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            dist[i][j]=INT_MAX;
	        }
	    }
	   bfs(grid);
	    return dist;
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends