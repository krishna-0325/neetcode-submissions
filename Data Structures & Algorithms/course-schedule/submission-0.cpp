class Solution {
public:
bool iscycle(int src, vector<bool>& vis, vector<bool>& recpath, vector<vector<int>>& adj)
{
    vis[src]=true;
    recpath[src]=true;
    for(int v: adj[src])
    {
        if(!vis[v])
        {
          if (iscycle(v,vis,recpath,adj))
          return true;
        }
        else if(recpath[v])
        return true;
    }
    recpath[src]=false;
    return false;
}
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<bool>vis(n,false);
        vector<bool>recpath(n,false);
        for(auto&  edge: edges)
        {
            int a=edge[0];
            int b=edge[1];

            adj[a].push_back(b);
        }
       for(int i=0;i<n;i++)
       {
        if(!vis[i])
        {
            if(iscycle(i,vis,recpath,adj))
            return false;
        }
       }
       return true;
    }
};
