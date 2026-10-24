#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<vector<int>> g;
vector<ll> w,subtree;

ll dfs(int u,int parent) {
    subtree[u] = w[u];

    for(int v : g[u]) {
        if(v == parent) continue;

        subtree[u] += dfs(v,u);
    }
    return subtree[u];
}

void solve() {
    int n;
    cin >> n;

    g.assign(n+1,vector<int>());
    w.assign(n+1,0);
    subtree.assign(n+1,0);

    for(int i = 1;i <= n;i++) {
        cin >> w[i];
    }

    for(int i = 1;i < n;i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);

    for(int i = 1;i <= n;i++) {
        cout << subtree[i] << (i == n ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}