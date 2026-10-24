#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> cnt(n+1,0);
    for(int i = 0;i < n;i++) {
       int x;
       cin >> x;
       cnt[x]++;
    }

    int a = 0;
    for(int i = 0;i <= n;i++) {
        if(cnt[i] == 0 || cnt[i] + a < k) {
            cout << i << '\n';
            return;
        }
        a += cnt[i] - k;
    }
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