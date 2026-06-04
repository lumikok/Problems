#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs_interative(int start,const vector<vector<int>>& graph) {
    vector<int> visited(graph.size(),0);
    stack<int> s;
    s.push(start);
    while(!s.empty()) {
        int u = s.top();
        s.pop();
        if(visited[u]) continue;
        visited[u] = 1;

        cout << u << " ";
        // 注意：栈是后进先出，故和递归的输出顺序相反
        for (int v : graph[u]) {
            if(!visited[v]) {
                s.push(v);
            }
        }
    }
}
