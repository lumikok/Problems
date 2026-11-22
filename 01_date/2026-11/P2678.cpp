// 15min
// 二分答案，贪心
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 5e4 + 5;
int l,n,m;
int a[maxn];

int check(int mid) {
    int cnt = 0;
    int last = 0;
    for(int i = 1;i <= n+1;i++) {
        if(a[i] - last < mid) {
            cnt++;
        } else {
            last = a[i];
        }
    }
    return cnt;
}

void solve() {
    cin >> l >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    a[0] = 0;
    a[n+1] = l;
    int i = 1,r = l,ans = 0;
    while(i <= r) {
        int mid = i + ((r-i) >> 1);
        if(check(mid) <= m) {
            ans = mid;
            i = mid+1;
        } else {
            r = mid-1;
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