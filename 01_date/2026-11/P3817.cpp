#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    
    if(a[0] > x) {
        ans += a[0] - x;
        a[0] = x;
    }
    for(int i = 1; i < n; i++) {
        if(a[i - 1] + a[i] > x) {
            ll t = a[i - 1] + a[i] - x;
            ans += t;
            a[i] -= t;
        }
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