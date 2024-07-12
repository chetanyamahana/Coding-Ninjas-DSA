#include <bits/stdc++.h>
using namespace std;
void printDFS(int **edges,int n,int sv,bool *visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,n,i,visited);
        }
    }
}
//BFS
void printBFS(int **edges, int n, bool *visited, int sv)
{
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    while (!q.empty())
    {
        int fro = q.front();
        q.pop();
        cout << fro << " ";
        for (int i = 0; i < n; i++)
        {
            if (i == fro)
            {
                continue;
            }
            if (edges[fro][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
//DFS
void DFS(int** edges,int n){
    bool* visited= new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printDFS(edges, n, i, visited);
        }
    }
    delete[] visited;
}
//BFS
void BFS(int **edges, int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            printBFS(edges, n, visited,i);
        }
    }
    delete[] visited;
}
int main(){
    int n;
    int e;
    cin>>n>>e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    //DFS
    //printDFS(edges,n,0,visited);
    //cout<<endl;
    //BFS
    //print2(edges, n, visited, 0);

    cout<<"DFS"<<endl;
    DFS(edges,n);
    cout<<"BFS"<<endl;
    BFS(edges,n);
    //Delete all the memory
    //delete[] visited;
    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete[] edges;

}