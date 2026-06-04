#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int start,const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> dist(n,-1); // 存储距离，兼顾visited功能，-1为未访问
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v : graph[u]) {
            if(dist[v] == -1) { // 未访问
            dist[v] = dist[u] + 1;
            q.push(v);
            }
        }
    }
    return dist;
}

int main() {
    vector<vector<int>> graph = {{1,2},{0,3,4},{0},{1},{1}};
    vector<int> dist = bfs(0,graph);
    for (int i = 0;i < dist.size();i++) {
        cout << "到节点" << i << " 的最短步数：" << dist[i] << endl;
    }
    return 0;
}