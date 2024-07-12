#include <bits/stdc++.h>
#define int long long
using namespace std;
template <typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;
    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // Create an edge from u to v
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}
void bfs(vector<vector<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        // Store frontnode into ans
        ans.push_back(frontNode);

        // traverse all neighbours of frontNode
        for (auto i : adjList[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;
    prepareAdjList(adjList, edges);

    // traverse all componenets of a graph
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(adj, visited, ans, i);
        }
    }
    return ans;
}
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component)
{
    component.push_back(node);
    visited[node] = true;

    // Recursive call for every connected node
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, component);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    // Prepare adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> ans;
    // For all nodes call DFS,if not visited
    unordered_map<int, bool> visited;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cout << "Enter the number of nodes:" << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges:" << endl;
    cin >> m;

    graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // Creating an undirected Graph
        g.addEdge(u, v, 0);
    }

    // Printing Graph
    g.printAdjList();
    return 0;
}
