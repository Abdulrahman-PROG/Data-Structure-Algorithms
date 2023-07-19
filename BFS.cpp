#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(vector<vector<int>>& graph,int start){
    int n = graph.size();
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v: graph[u]){
            if(!visited[v]){
             visited[v]=true;
             q.push(v);
             }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n);
    for(int i = 0; i < m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int start;
    cin>>start;
    bfs(graph,start);
    return 0;
}#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(vector<vector<int>>& graph,int start){
    int n = graph.size();
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v: graph[u]){
            if(!visited[v]){
             visited[v]=true;
             q.push(v);
             }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n);
    for(int i = 0; i < m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int start;
    cin>>start;
    bfs(graph,start);
    return 0;
}