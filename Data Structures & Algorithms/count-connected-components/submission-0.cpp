class Solution {
public:
void dfs(int src, vector<bool>& vis, vector<vector<int>>& adj)
{
    vis[src]=true;
    for(int v: adj[src])
    {
        if(!vis[v])
        {
            dfs(v,vis,adj);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
  int ans=0;
  vector<bool>vis(n,false);
  vector<vector<int>>adj(n);
  for(auto& it: edges)
  {
    int a=it[0];
    int b=it[1];
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for(int i=0;i<n;i++)
  {
    if(!vis[i])
    {
        ans++;
        dfs(i,vis,adj);
    }
  }
  return ans;
    }
};
