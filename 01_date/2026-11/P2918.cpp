
#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int n, h;
int p[105], c[105];
int dp[55005];

void solve() {
    cin >> n >> h;

    int maxp = 0;

    for(int i = 1; i <= n; i++) {
        cin >> p[i] >> c[i];
        maxp = max(maxp, p[i]);
    }

    int maxn = h + maxp;

    memset(dp, 0x3f, sizeof(dp));
    dp[0] = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = p[i]; j <= maxn; j++) {
            dp[j] = min(dp[j], dp[j-p[i]] + c[i]);
        }
    }

    int ans = INF;

    for(int j = h; j <= maxn; j++) {
        ans = min(ans, dp[j]);
    }

    cout << ans << '\n';
}

int main() {
    solve();
    return 0;
}
