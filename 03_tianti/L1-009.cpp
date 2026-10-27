// 需要重新写
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll a = 0,b=1;
    while(n--) {
        ll c,d;
        char s;
        cin >> c >> s >> d;

        ll g = gcd(b,d);
        a = a*(d/g) + c*(b/g);
        b = (b/g) * d;

        ll t = gcd(abs(a),b);
        a /= t;
        b /= t;
    }
    if(a==0) {
        cout << 0 << '\n';
    } else {
        if(a<0) cout << '-';

        ll x = abs(a);
        ll i = x / b;
        ll r = x % b;

        if(i != 0) {
            cout << i;
            if(r != 0) cout << ' ';
        }
        if(r != 0) {
            cout << r << '/' << b;
        }
        cout << '\n';
    }
    return 0;
}