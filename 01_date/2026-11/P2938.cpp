// 多阶段完全背包
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int p[55][15];
const int maxn = 5e5 + 5;
int dp[maxn];

void solve() {
    int S,D,M;
    cin >> S >> D >> M;
    
    for(int i = 1;i <= S;i++) {
        for(int j = 1;j <= D;j++) {
            cin >> p[i][j];
        }
    }
    for(int d = 1;d < D;d++) {
        memset(dp,0,sizeof(dp));

        for(int i = 1;i <= S;i++) {
            int w = p[i][d];
            int v = p[i][d+1] - p[i][d];

            if(v <= 0) continue;

            for(int j = w;j <= M;j++) {
                dp[j] = max(dp[j],dp[j-w] + v);
            }
        }
        M += dp[M];
    }
    cout << M << '\n';
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