#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
typedef struct arr{
    int p,c;
} arr;

arr a[105];
int dp[50000+5005];

void solve() {
    int n,h;
    cin >> n >> h;
    int maxp = 0;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].p >> a[i].c;
        maxp = max(maxp,a[i].p);
    }
    int w = h + maxp;
    memset(dp,0x3f,sizeof(dp));
    dp[0] = 0;
    for(int i = 1;i <= n;i++) {
        for(int j = a[i].p;j <= w;j++) {
            dp[j] = min(dp[j],dp[j-a[i].p] + a[i].c);
        }
    }
    int ans = INF;
    for(int j = h;j <= w;j++) {
        ans = min(ans,dp[j]);
    }
    cout << ans << '\n';
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
