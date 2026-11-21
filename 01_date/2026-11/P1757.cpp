// 25min
// 分组背包
// old：防止重量为0时同组内多次选择
#include <bits/stdc++.h>
using namespace std;

typedef struct arr{
    int a,b,c;
} arr;

using ll = long long;
const int maxn = 10010;
int m,n;
vector<arr> a[maxn];
ll dp[maxn];

void solve() {
    cin >> m >> n;
    int max_c = 0;
    for(int i = 1;i <= n;i++) {
        int p,q,c;
        cin >> p >> q >> c;
        a[c].push_back({p,q});
        max_c = max(max_c,c);
    }
    for(int i = 0;i <= max_c;i++) {
        vector<ll> old(dp,dp+m+1);
        for(int j = m;j >= 0;j--) {
            for(auto t : a[i]) {
                if(j >= t.a) {
                    dp[j] = max(dp[j],old[j-t.a] + t.b);
                }
            }
        }
    }
    cout << dp[m] << '\n';
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