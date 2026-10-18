#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,k;
    cin >> n >> k;
    ll ans = 0;
    for(int i = 1;i <= k;i++) {
        int x,y;
        cin >> x >> y;
        if(n == 1) {
            ans += 1;
        } else {
            int d = max(abs(x-n),abs(y-n));
            ans += n-d;
        }
    }
    cout << ans << "\n";
    return 0;
}