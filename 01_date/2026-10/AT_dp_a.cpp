// 10min
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 1e5 + 10;

ll dp[maxn];
int h[maxn];

void solve() {
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> h[i];
    }
    dp[1] = 0;
    dp[2] = abs(h[2]-h[1]);
    for(int i = 3;i <= n;i++) {
        ll a = dp[i-1] + abs(h[i]-h[i-1]);
        ll b = dp[i-2] + abs(h[i] - h[i-2]);
        dp[i] = min(a,b);
    }
    cout << dp[n] << '\n';
    return;
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