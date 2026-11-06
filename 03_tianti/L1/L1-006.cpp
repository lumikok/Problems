// 需要重新写
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    int ans = 0;
    int st = n;
    for(int i = 2;i <= sqrt(n);i++) {
        ll p = 1;

        for(int j = i; ; j++) {
            p *= j;

            if(n % p != 0) break;
            if(j-i+1 > ans) {
                ans = j-i+1;
                st = i;
            }
        }
    }

    if(ans == 0) {
        cout << 1 << '\n';
        cout << n << '\n';
    } else {
        cout << ans << '\n';
        for(int i = st;i < st+ans;i++) {
            if(i > st) {
                cout << "*";
            }
            cout << i;
        }
        cout << '\n';
    }
    return 0;
}