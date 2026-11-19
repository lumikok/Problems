#include <bits/stdc++.h>
using namespace std;

typedef struct arr{
    int v,w,m;
} arr;

using ll = long long;
arr a[105];
ll dp[40010];

void solve() {
    int n,W;
    cin >> n >> W;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].v >> a[i].w >> a[i].m;
    }
    for(int i = 1;i <= n;i++) {
        for(int j = W;j >= a[i].w;j--) {
            for(int k = 1;k <= a[i].m && k * a[i].w <= j;k++) {
                dp[j] = max(dp[j],dp[j-k*a[i].w] + k * a[i].v);
            }
        }
    }
    cout << dp[W] << '\n';
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