#include <iostream>
using namespace std;

int main()
{
    int n,m; //n is the number of nodes and m is the number of edges.
    cin >> n >> m;
    int adj[n+1][n+1]; //declare the adjancy matrix. if zero based indexing is followed.

    for(int i =0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}
//disadvantage of this method is that if the number of nodes is very high we can not create that big
//of 2-D array.

//If the size gets large we use different method called as adj list.
//Now how it is different from the matrix is here we store vectors at every index and then append
//the nodes that they have relation to.