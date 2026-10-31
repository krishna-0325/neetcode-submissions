class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                   q.push({{i,j},0});
                   vis[i][j]=true;
                }
            }
        }
        while(!q.empty())
        {
             int i=q.front().first.first;
             int j=q.front().first.second;
             int t=q.front().second;

             q.pop();


         
            if(i-1 >= 0 && !vis[i-1][j] && grid[i-1][j] == INT_MAX) {
                q.push({{i-1, j}, t+1});
                vis[i-1][j] = true;
                grid[i-1][j] = t+1;
            }

            
            if(j-1 >= 0 && !vis[i][j-1] && grid[i][j-1] == INT_MAX) {
                q.push({{i, j-1}, t+1});
                vis[i][j-1] = true;
                grid[i][j-1] = t+1;
            }

           
            if(i+1 < n && !vis[i+1][j] && grid[i+1][j] == INT_MAX) {
                q.push({{i+1, j}, t+1});
                vis[i+1][j] = true;
                grid[i+1][j] = t+1;
            }

            
            if(j+1 < m && !vis[i][j+1] && grid[i][j+1] == INT_MAX) {
                q.push({{i, j+1}, t+1});
                vis[i][j+1] = true;
                grid[i][j+1] = t+1;
            }
        }
        
    }
};
