#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
int n,m,w;
int fa[maxn];
int c[maxn],d[maxn];
int sumc[maxn],sumd[maxn];
int dp[maxn];

void init(int n) {
    for(int i = 1;i <= n;i++)
        fa[i] = i;
}

int find(int x) {
    if(fa[x] != x) {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}

void unite(int x,int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;

    fa[x] = y;
}

void solve() {
    cin >> n >> m >> w;
    init(n);
    for(int i = 1;i <= n;i++) {
        cin >> c[i] >> d[i];
    }
    for(int i = 1;i <= m;i++) {
        int u,v;
        cin >> u >> v;
        unite(u,v);
    }
    for(int i = 1;i <= n;i++) {
        int root = find(i);
        sumc[root] += c[i];
        sumd[root] += d[i];
    }
    for(int i = 1;i <= n;i++) {
        if(find(i) != i) continue;

        for(int j = w;j >= sumc[i];j--) {
            dp[j] = max(dp[j],dp[j-sumc[i]] + sumd[i]);
        }
    }
    cout << dp[w] << '\n';
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