#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 2e5+10;
ll n,c;
ll a[maxn];

void solve() {
    cin >> n >> c;
    map<ll,ll> mp;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        mp[a[i]]++;
        a[i] -= c;
    }
    ll sum = 0;
    for(int i = 1;i <= n;i++) {
        sum += mp[a[i]];
    }
    cout << sum << '\n';
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