#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    ll m = 1e9 + 5;
    int flag = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        if(a[i] == 0) flag = 1;
        m = min(m,a[i]);
    }
    if(flag) {
        cout << n << '\n';
        return;
    }
    if(m < n) cout << n << '\n';
    else cout << 0 << '\n';
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