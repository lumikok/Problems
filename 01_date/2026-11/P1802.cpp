#include <bits/stdc++.h>
using namespace std;

typedef struct arr {
    int lose;
    int win;
    int s;
} arr;

using ll = long long;
const int maxn = 1010;
int n,x;
arr a[maxn];
ll dp[maxn];

void solve() {
    cin >> n >> x;
    ll sum = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i].lose >> a[i].win >> a[i].s;
        sum += a[i].lose;
    }
    for(int i = 0;i < n;i++) {
        for(int j = x;j >= a[i].s;j--) {
            dp[j] = max(dp[j],dp[j-a[i].s] + a[i].win - a[i].lose);
        }
    }
    sum += dp[x];
    cout << sum * 5 << '\n';
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