// 13min
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 1e5 + 5;
ll dp[maxn];
ll cnt[maxn];

void solve() {
    int n;
    cin >> n;
    ll M = 0;
    for(int i = 0;i < n;i++) {
        ll a;
        cin >> a;
        M = max(M,a);
        cnt[a]++;
    }
    dp[1] = cnt[1];
    dp[2] = max(dp[1],cnt[2] * 2);
    for(int i = 3;i <= M;i++) {
        dp[i] = max(dp[i-1],dp[i-2] + cnt[i] * i);
    }
    cout << dp[M] << '\n';
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