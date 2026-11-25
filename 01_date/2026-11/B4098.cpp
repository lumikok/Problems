// Ë«Ö¸Õë
// OK
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e6 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
int a[maxn];

void solve() {
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    int l = 1;
    map<int,int> cnt;
    int have = 0;
    int ans = INF;
    for(int r = 1;r <= n;r++) {
        cnt[a[r]]++;
        if(cnt[a[r]] == 1) have++;
        if(have == m) {
            while(l <= r) {
                if(cnt[a[l]] == 1) break;
                cnt[a[l]]--;
                l++;
            }
            int len = r - l + 1;
            ans = min(ans,len * 10);
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