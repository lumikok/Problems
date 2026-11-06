// i*i»á³¬¹ýint·¶Î§
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isprime(ll n) {
    if(n < 2) return false;
    if(n==2) return true;
    if(n % 2 == 0) return false;

    for(ll i = 3;i * i <= n;i+=2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    string yes = "Yes\n";
    string no = "No\n";
    int n;
    cin >> n;
    while(n--) {
        ll a;
        cin >> a;
        if(isprime(a)) cout << yes;
        else cout << no;
    }
    return 0;
}