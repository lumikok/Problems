#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,ans;
        ans = 100;
        cin >> n;
        while(n--) {
            int x,y;
            cin >> x >> y;
            if(x > 50) x = 50;
            if(ans - x < 100) {
                ans = 100;
            } else {
                ans -= x;
            }
            if(ans + y > 400) {
                ans = 400;
            } else {
                ans += y;
            }
        }
        cout << ans << endl;
    }
}