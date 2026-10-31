
class Solution {
public:

    void dfs(int i, int j, vector<vector<int>>& heights,
             vector<vector<bool>>& vis, int n, int m) {

        vis[i][j] = true;

        
        if(i-1 >= 0 && !vis[i-1][j] &&
           heights[i-1][j] >= heights[i][j]) {
            dfs(i-1, j, heights, vis, n, m);
        }

      
        if(i+1 < n && !vis[i+1][j] &&
           heights[i+1][j] >= heights[i][j]) {
            dfs(i+1, j, heights, vis, n, m);
        }

        if(j-1 >= 0 && !vis[i][j-1] &&
           heights[i][j-1] >= heights[i][j]) {
            dfs(i, j-1, heights, vis, n, m);
        }

       
        if(j+1 < m && !vis[i][j+1] &&
           heights[i][j+1] >= heights[i][j]) {
            dfs(i, j+1, heights, vis, n, m);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        int n = heights.size();
        int m = heights[0].size();

        vector<vector<bool>> pacific(n, vector<bool>(m, false));
        vector<vector<bool>> atlantic(n, vector<bool>(m, false));

       
        for(int i = 0; i < n; i++) {
            dfs(i, 0, heights, pacific, n, m);
        }

        for(int j = 0; j < m; j++) {
            dfs(0, j, heights, pacific, n, m);
        }

       
        for(int i = 0; i < n; i++) {
            dfs(i, m-1, heights, atlantic, n, m);
        }

        for(int j = 0; j < m; j++) {
            dfs(n-1, j, heights, atlantic, n, m);
        }

        vector<vector<int>> ans;

      
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(pacific[i][j] && atlantic[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }

        return ans;
    }
};
