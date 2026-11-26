// ’ª£¨¿®∫≈∆•≈‰
// OK£ª
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

void solve() {
    stack<int> st;
    string s;
    cin >> s;
    bool vis[105] = {};
    for(int i = 0;i < (int)s.size();i++) {
        if(s[i] == '(' || s[i] == '[') {
            st.push(i);
        } else {
            if(!st.empty()) {
                int j = st.top();
                if((s[j] == '(' && s[i] == ')') || (s[j] == '[' && s[i] == ']')) {
                    vis[i] = vis[j] = true;
                    st.pop();
                }
            }
        }
    }
    for(int i = 0;i < (int)s.size();i++) {
        if(vis[i]) {
            cout << s[i];
        } else {
            if(s[i] == '(' || s[i] == ')') {
                cout << "()";
            } else {
                cout << "[]";
            }
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