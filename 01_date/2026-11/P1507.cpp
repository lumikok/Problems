#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

typedef struct arr{
    int h,t,k;
} arr;
arr a[55];

int dp[405][405];

void solve() {
    int h,t,n;
    cin >> h >> t >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].h >> a[i].t >> a[i].k;
    }
    for(int i = 1;i <= n;i++) {
        for(int j = h;j >= a[i].h;j--) {
            for(int k = t;k >= a[i].t;k--) {
                dp[j][k] = max(dp[j][k],dp[j-a[i].h][k-a[i].t] + a[i].k);
            }
        }
    }
    cout << dp[h][t] << '\n';
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