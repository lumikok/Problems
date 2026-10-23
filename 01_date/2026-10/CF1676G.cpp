#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<vector<int>> g;
int ans;
string s; 

int dfs(int u) {
    int diff = (s[u-1]=='B' ? 1 : -1);

    for(int v : g[u]) {
        diff += dfs(v);
    }

    if(diff == 0) {
        ans++;
    }
    return diff;
}

void solve() {
    int n;
    cin >> n;
    ans = 0;
    g.assign(n+1,vector<int>());
    for(int i = 2;i <= n;i++) {
        int x;
        cin >> x;
        g[x].push_back(i);
    }
    cin >> s;
    dfs(1);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}