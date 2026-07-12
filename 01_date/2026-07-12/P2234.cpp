// 洛谷 普及-
// set的使用技巧
// 第一次：错
// 需重写

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    set<int> st;
    int ans = 0;

    for(int i = 0;i < n;i++) {
        int a;
        cin >> a;

        if(i == 0) {
            ans += a;
            st.insert(a);
            continue;
        }
        auto it = st.lower_bound(a);

        int m = INT_MAX;

        if(it != st.end()) {
            m = min(m,abs(*it - a));
        }
        if(it != st.begin()) {
            auto pre = it;
            pre--;
            m = min(m,abs(*pre - a));
        }

        ans += m;
        st.insert(a);
    }
    cout << ans << endl;
    return 0;
}