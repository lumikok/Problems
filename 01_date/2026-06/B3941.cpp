// lcm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b) {
    while(b!=0) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

ll lcm(ll a,ll b){
    return a / gcd(a,b) * b;
}

int main()
{
    int n;
    cin >> n;
    ll ans = 1;
    while(n--) {
        ll a;
        cin >> a;
        ans = lcm(ans,a);
    }
    cout << ans << endl;
    return 0;
}