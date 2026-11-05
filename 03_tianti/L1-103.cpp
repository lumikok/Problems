#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ans(ll a) {
    if(a < 1) return 1;
    return (a % 10) * ans(a/10);
}

ll count(ll b) {
    if(b < 10) return 0;
    int cnt = 0;
    ll n = b;
    while(n >= 10) {
        n = ans(n);
        cnt++;
    }
    return cnt;
}

int main()
{
    ll a = 0, b = 0;
    cin >> a >> b;
    set<ll> st;
    int cnt = 0;
    for(ll i = a;i <= b;i++) {
        int t = count(i);
        if(t > cnt) {
            st.clear();
            st.insert(i);
            cnt = t;
        } else if(t == cnt) {
            st.insert(i);
        } else {
            continue;
        }
    }
    cout << cnt << '\n';
    int flag = 1;
    for(ll m : st) {
        if(!flag) cout << " ";
        cout << m;
        flag = 0;
    }
    return 0;
}