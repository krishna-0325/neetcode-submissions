class Solution {
public:
int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int n, int m)
{
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || vis[i][j])
    return 0;
    int area=1;
    vis[i][j]=true;
    area+=dfs(i-1,j,grid,vis,n,m);
    area+=dfs(i+1,j,grid,vis,n,m);
    area+=dfs(i,j-1,grid,vis,n,m);
    area+=dfs(i,j+1,grid,vis,n,m);

    return area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        if(n==0)
        return 0;
        int m=grid[0].size();
        int maxarea=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                {
                    int area= dfs(i,j,grid,vis,n,m);
                    maxarea= max(area,maxarea);
                }
            }
        }
        return maxarea;
    }
};
