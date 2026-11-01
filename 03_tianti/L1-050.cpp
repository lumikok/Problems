// 需要重新写
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int l;
    ll n;
    cin >> l >> n;
    ll total = 1;

    for(int i = 0;i < l;i++) {
        total *= 26;
    }

    ll x = total - n;
    string ans(l,'a');

    for(int i = l-1;i >= 0;i--) {
        ans[i] = 'a' + x % 26;
        x /= 26;
    }
    cout << ans << '\n';
    return 0;
}