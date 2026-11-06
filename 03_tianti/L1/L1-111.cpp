// 需要重新做
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    for(int k = 31;k >= 1;k--) {
        ll sum = 0;

        for(ll i = 1;;i++) {
            ll p = 1;

            for(int j = 0;j < k;j++) {
                if(p >(n-sum)/i) {
                    p = n-sum+1;
                    break;
                }
                p *= i;
            }
            if(p > n - sum) break;
            sum += p;

            if(sum == n) {
                for(ll j = 1;j <= i;j++) {
                    if(j > 1) cout << "+";
                    cout << j << "^" << k;
                }
                cout << '\n';
                return 0;
            }
        }
    }

    cout << "Impossible for " << n << ".\n";
    return 0;
}