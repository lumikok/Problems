#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

set<ll> getprime(ll n) {
    set<ll> a;
    if(n % 2 == 0) {
        a.insert(2);
        while(n % 2 == 0) n /= 2;
    }
    for(ll i = 3;i * i <= n;i += 2) {
        if(n % i == 0) {
        a.insert(i);
        while(n % i == 0) n /= i;
        }
    }
    if(n > 1) a.insert(n);
    return a;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll x,y;
        cin >> x >> y;
        auto a = getprime(x);
        auto b = getprime(y);
        ll ans = 1;
        for(auto p : a) {
            if(b.find(p) == b.end()) ans *= p;
        }
        for(auto p : b) {
            if(a.find(p) == a.end()) ans *= p;
        }
        cout << ans << endl;
    }
    return 0;
}