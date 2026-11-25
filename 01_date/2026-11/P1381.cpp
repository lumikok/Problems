// Ë«Ö¸Õë£¬map£¬×Ö·û´®
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
set<string> st;
vector<string> v;
set<string> s2;

void solve() {
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        string s;
        cin >> s;
        st.insert(s);
    }
    int count = 0;
    int t = 0,m;
    cin >> m;
    for(int i = 1;i <= m;i++) {
        string s;
        cin >> s;
        v.push_back(s);
        if(st.find(s) != st.end()) s2.insert(s);
    }
    cout << int(s2.size()) << '\n';
    
    map<string,int> cnt;
    int l = 0;
    int ans = INF;
    int best = 0;
    int have = 0;
    for(int r = 0;r < m;r++) {
        if(st.find(v[r]) != st.end()) {
            cnt[v[r]]++;

            if(cnt[v[r]] == 1) {
                have++;
            }
        }
        while(l <= r) {
            if(st.find(v[l]) != st.end() && cnt[v[l]] == 1) break;

            if(st.find(v[l]) != st.end()) cnt[v[l]]--;
            l++;
        }
        int len = r - l + 1;

        if(have > best || (have == best && len < ans)) {
            best = have;
            ans = len;
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