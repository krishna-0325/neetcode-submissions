
class Solution {
public:

    bool iscycle(int src, int parent,
                 vector<bool>& vis,
                 vector<vector<int>>& adj)
    {
        vis[src] = true;

        for(int v : adj[src])
        {
            if(!vis[v])
            {
                if(iscycle(v, src, vis, adj))
                    return true;
            }
            else if(v != parent)
            {
                return true;
            }
        }

        return false;
    }

    bool validTree(int n, vector<vector<int>>& edges) {

        if(edges.size() != n-1)
            return false;

        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);

        for(auto& it : edges)
        {
            int a = it[0];
            int b = it[1];

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        
        if(iscycle(0, -1, vis, adj))
            return false;

        
        for(int i = 0; i < n; i++)
        {
            if(!vis[i])
                return false;
        }

        return true;
    }
};
