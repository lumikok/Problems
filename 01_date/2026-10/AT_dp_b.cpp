// 10min

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 1e5 + 10;

ll dp[maxn];
int h[maxn];

void solve() {
    int n,k;
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        cin >> h[i];
    }
    dp[1] = 0;
    
    for(int i = 2;i <= n;i++) {
        dp[i] = LLONG_MAX;

        for(int j = max(1,i-k);j < i;j++) {
            dp[i] = min(dp[i],dp[j] + abs(h[i] - h[j]));
        }
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