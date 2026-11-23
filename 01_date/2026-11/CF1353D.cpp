#include <bits/stdc++.h>
using namespace std;

struct Node {
    int l, r;

    bool operator<(const Node& a) const {
        if(r - l != a.r - a.l) {
            return r - l < a.r - a.l;
        }
        return l > a.l;
    }
};

void solve() {
    int n;
    cin >> n;

    vector<int> ans(n + 1);

    priority_queue<Node> q;
    q.push({1, n});

    for(int i = 1; i <= n; i++) {
        auto [l, r] = q.top();
        q.pop();

        int mid = (l + r) / 2;
        ans[mid] = i;

        if(l <= mid - 1) {
            q.push({l, mid - 1});
        }

        if(mid + 1 <= r) {
            q.push({mid + 1, r});
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}