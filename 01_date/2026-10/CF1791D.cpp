// 17min
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    vector<int> pre(n), suf(n);

    int seen[26] = {};
    int cnt = 0;
    for(int i = 0;i < n;i++) {
        int c = s[i] - 'a';
        if(!seen[c]) {
            seen[c] = 1;
            cnt++;
        }
        pre[i] = cnt;
    }

    memset(seen,0,sizeof(seen));
    cnt = 0;
    for(int i = n-1;i >= 0;i--) {
        int c = s[i] - 'a';
        if(!seen[c]) {
            seen[c] = 1;
            cnt++;
        }
        suf[i] = cnt;
    }

    int ans = 0;
    for(int i = 0;i < n-1;i++) {
        ans = max(ans,pre[i] + suf[i+1]);
    }
    cout << ans << '\n';
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