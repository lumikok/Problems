#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,y;
    cin >> x >> y;
    double ans = x /(y*y);
    cout << fixed << setprecision(1) << ans << '\n';
    if(ans > 25.0) {
        cout << "PANG\n";
    } else {
        cout << "Hai Xing\n";
    }
    return 0;
}