// 大根堆，小根堆
// 两个维护第k小，第k大元素
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
priority_queue<int> l;
priority_queue<int,vector<int>,greater<int>> h;

const int maxn = 2e5 + 5;
int a[maxn],u[maxn];

void solve() {
    int m,n;
    cin >> m >> n;
    
    for(int i = 1;i <= m;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        cin >> u[i];
    }

    int k = 0;
    int p = 0;
    for(int i = 1;i <= n;i++) {
        while(p < u[i]) {
            p++;
            l.push(a[p]);

            if(l.size() > k) {
                h.push(l.top());
                l.pop();
            }
        }
        k++;
        l.push(h.top());
        h.pop();

        cout << l.top() << '\n';
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