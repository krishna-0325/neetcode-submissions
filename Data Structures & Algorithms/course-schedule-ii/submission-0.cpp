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
            if(iscycle(v,vis,recpath,adj))
            return true;
        }
        else if(recpath[v])
        {
            return true;
        }
    }
    recpath[src]=false;
    return false;
}
void topo(int src, vector<bool>& vis, stack<int>& st, vector<vector<int>>& adj)
{
    vis[src]=true;
    for(int v: adj[src])
    {
        if(!vis[v])
        {
            topo(v,vis,st,adj);
        }
    }
    st.push(src);
}
    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<bool>vis(n,false);
        vector<bool>recpath(n,false);
vector<int>ans;
            vector<vector<int>>adj(n);
            for(auto& it: edges)
            {
                int a=it[0];
                int b=it[1];
                adj[b].push_back(a);
            }
            for(int i=0;i<n;i++)
            {
                if(!vis[i])
                {
                    if(iscycle(i,vis,recpath,adj))
                    return ans;
                }
            }

stack<int>st;
            vis.assign(n,false);
            for(int i=0;i<n;i++)
            {
                if(!vis[i])
                {
                    topo(i,vis,st,adj);
                }
            }
            while(!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }
return ans;
    }
};
