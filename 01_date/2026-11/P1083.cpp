// 20min
// 二分答案 + 差分
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n,m;
const int maxn = 1e6 + 5;

typedef struct arr{
    ll d;
    int s,t;
} arr;

ll d[maxn],r[maxn];
arr a[maxn];

bool check(int k) {
    memset(d,0,sizeof(d));
    for(int i = 1;i <= k;i++) {
        d[a[i].s] -= a[i].d;
        d[a[i].t+1] += a[i].d;
    }
    ll sum = 0;
    for(int i = 1;i <= n;i++) {
        sum += d[i];
        if(sum + r[i] < 0) return false;
    }
    return true;
}

void solve() {
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> r[i];
    }
    for(int i = 1;i <= m;i++) {
        cin >> a[i].d >> a[i].s >> a[i].t;
    }
    int l = 0,r = m;
    while(l < r) {
        int mid = (l + r + 1) / 2;
        if(check(mid)) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    if(l == m) {
        cout << 0 << '\n';
    } else {
        cout << -1 << '\n';
        cout << l + 1 << '\n';
    }
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