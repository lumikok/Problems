#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

typedef struct arr{
    int m,t;
} arr;
arr a[105];
int dp[205][205];

void solve() {
    int n,m,t;
    cin >> n >> m >> t;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].m >> a[i].t;
    }
    for(int i = 1;i <= n;i++) {
        for(int j = m;j >= a[i].m;j--) {
            for(int k = t;k >= a[i].t;k--) {
                dp[j][k] = max(dp[j][k],dp[j-a[i].m][k-a[i].t] + 1);
            }
        }
    }
    cout << dp[m][t] << '\n';
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