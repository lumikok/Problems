// 快速幂和求逆元
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll qpow(ll a,ll b,ll m) {
    ll res = 1 % m;
    a %= m;
    while(b) {
        if(b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

ll inv(ll a,ll m) {
    return qpow(a,m-2,m);
}

int main()
{
    ll a,b,m;
    cin >> a >> b >> m;
    cout << qpow(a,b,m) << " ";
}


