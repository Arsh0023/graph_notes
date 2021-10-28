#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//bfs is traversing the adjacent nodes.
// We can visit all the nodes of a graph component starting from any one node.

vector<int> bfs( vector<int> adj[] , int n)
{
    vector<int> vis(n+1,0);
    queue<int> q;
    vector<int> bfs_ans;
    vis[0] = 1;

    for(int i =1;i<=n;i++)
    {
        if(!vis[i])
        {
            q.push(i);
            vis[i] = 0;

            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs_ans.push_back(node);

                for(auto j: adj[node])
                {
                    if(!vis[j])
                    {
                        q.push(j);
                        vis[j] = 1;
                    }
                }
            }
        }
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i =0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bfs_ans = bfs(adj,n);
    return 0;
}