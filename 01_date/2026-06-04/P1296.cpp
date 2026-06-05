// 洛谷
// 二分，STL 
// 第一次：??

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn = 1e6 + 5;
ll n,d;
ll a[maxn];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> d;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    ll ans = 0;
    for(int i = 1;i <= n;i++) {
        ll idx = upper_bound(a+1,a+1+n,a[i] + d) - a;
        ans += idx - i - 1;
    }
    cout << ans << endl;
    return 0;
}