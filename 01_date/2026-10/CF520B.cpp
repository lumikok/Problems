// 21min
// 反复出错在数组a的大小以及判断边界条件（本质都是a的大小）
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,m;
    cin >> n >> m;
    if(n > m) {
        cout << n - m << '\n';
        return;
    }
    queue<int> q;
    q.push(n);
    int limit = 2 * max(n,m);
    vector<int> a(limit+1,-1);
    a[n] = 0;
    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if (x == m) {
            cout << a[x] << '\n';
            return;
        }
        int nx1 = x * 2;
        int nx2 = x - 1;

        if (nx1 >= 1 && nx1 <= limit && a[nx1] == -1) {
            a[nx1] = a[x] + 1;
            q.push(nx1);
        }

        if (nx2 >= 1 && nx2 <= limit && a[nx2] == -1) {
            a[nx2] = a[x] + 1;
            q.push(nx2);
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