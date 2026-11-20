// »ìºÏ±³°üÁ·Ï°
#include <bits/stdc++.h>
using namespace std;

typedef struct arr{
    int w,v,m;
} arr;

using ll = long long;
const int maxn = 1e5+10;
int dp[maxn];
arr a[maxn];

void solve() {
    int W;
    cin >> W;
    a[1].w = 2,a[1].v = 5,a[1].m = 13;
    a[2].w = 5,a[2].v = 16,a[2].m = 1;
    a[3].w = 3,a[3].v = 6,a[3].m = 0;
    for(int i = 1;i <= 3;i++) {
        int cnt = a[i].m;
        if(cnt == 0) {
            for(int j = a[i].w;j <= W;j++) {
                dp[j] = max(dp[j],dp[j-a[i].w] + a[i].v);
            }
            continue;
        }
        for(int k = 1;cnt > 0;k*=2) {
            int num = min(cnt,k);
            int w = a[i].w * num;
            int v = a[i].v * num;
            cnt -= num;

            for(int j = W;j >= w;j--) {
                dp[j] = max(dp[j],dp[j-w] + v);
            }
        }
    }
    cout << dp[W] << '\n';
    memset(dp,0,sizeof(dp));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}