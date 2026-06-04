#include <bits/stdc++.h>
using namespace std;

const int maxn = 1005;
vector<int> graph[maxn];
int n,m,x,y;
bool vis[maxn];
int max_num = 0;

void dfs(int u) {
    vis[u] = true;

    if(u > max_num) max_num = u;

    for(int v : graph[u]) {
        if(!vis[v]) dfs(v);
    }
}

int main() {
    cin >> n >> m;
    while(m--) {
        cin >> x >> y;
        graph[x].push_back(y);
    }
    for(int i = 1;i <= n;i++) {
        memset(vis,false,sizeof(vis));
        max_num = i;
        dfs(i);
        cout << max_num << " ";
    }
    return 0;
}