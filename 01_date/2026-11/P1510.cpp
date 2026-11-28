#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e4 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
typedef struct arr{
    int k,m;
} arr;
arr a[maxn];

int dp[maxn];

void solve() {
    int v,n,c;
    cin >> v >> n >> c;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].k >> a[i].m;
    }
    for(int i = 1;i <= n;i++) {
        for(int j = v;j >= a[i].m;j--) {
            dp[j] = max(dp[j],dp[j-a[i].m]+a[i].k);
        }
    }
    for(int j = 0;j <= c;j++) {
        if(dp[j] >= v) {
            cout << c-j << '\n';
            return;
        }
    }
    cout << "Impossible\n";
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