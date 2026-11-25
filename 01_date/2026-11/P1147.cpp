#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

void solve() {
    ll m;
    cin >> m;
    ll sum = 3;
    for(int i = 1,j = 2;i <= m / 2;) {
        if(sum == m) {
            cout << i << ' ' << j << '\n';
            sum -= i;
            i++;
        } else if(sum < m) {
            j++;
            sum += j;
        } else {
            sum -= i;
            i++;
        }
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