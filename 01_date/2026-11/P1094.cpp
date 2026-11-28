#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

void solve() {
    int w,n;
    cin >> w >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int ans = 0;
    sort(a.begin(),a.end());
    int l = 0,r = a.size() - 1;
    while(l < r) {
        int sum = a[l] + a[r];
        if(sum > w) {
            ans++;
            r--;
        } else {
            ans++;
            l++;
            r--;
        }
    }
    if(l == r) {
        ans++;
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