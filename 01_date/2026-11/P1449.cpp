// 栈，后缀表达式
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
    stack<int> st;

    for(int i = 0;i < s.size();i++) {
        if(s[i] == '@') break;
        if(s[i] == '.') continue;
        if(s[i] >= '0' && s[i] <= '9') {
            int num = 0;
            while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            st.push(num);
            i--;
        } else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();
            int ans;
            switch(s[i]) {
                case '+': ans = a + b;break;
                case '-': ans = a - b;break;
                case '*': ans = a * b;break;
                case '/': ans = a / b;break;
            }
            st.push(ans);
        }
    }
    cout << st.top() << '\n';
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