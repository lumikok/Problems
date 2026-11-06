#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a;
    cin >> a;
    ll t = 2;
    while(t <= a) {
        t *= 2;
    }
    cout << t / 2 << '\n';
    return 0;
}