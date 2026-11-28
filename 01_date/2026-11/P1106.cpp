#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

void solve() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.length();
    for(int i = 1;i <= k;i++) {
        for(int j = 0;j <= n;j++) {
            while(s[0] == '0') s.erase(0,1);
            if(s[j] > s[j+1]) {
                s.erase(j,1);
                n--;
                break;
            }
        }
    }
    for(int i = 0;i < n;i++) {
        cout << s[i];
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