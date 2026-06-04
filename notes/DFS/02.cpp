#include <iostream>
#include <vector>
using namespace std;

void dfs(int u,vector<int>& visited,const vector<vector<int>>& graph) {
    if(visited[u]) return;
    visited[u] = 1;
    cout << u << " ";
    for(int v : graph[u]) {
        if(!visited[v])
        dfs(v,visited,graph);
    }
}

int main() {
    vector<vector<int>> graph = {{1,2},{0,3,4},{0},{1},{1}};
    vector<int> visited(graph.size(),0);
    dfs(0,visited,graph); // 输出 0 1 3 4 2 （顺序依据访问顺序）
    return 0;
}
