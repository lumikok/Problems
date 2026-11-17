#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int m,n;
int dp[20010];
int a[40];

void solve() {
    cin >> m >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        for(int j = m;j >= a[i];j--) {
            dp[j] = max(dp[j],dp[j-a[i]] + a[i]);
        }
    }
    cout << m - dp[m] << '\n';
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