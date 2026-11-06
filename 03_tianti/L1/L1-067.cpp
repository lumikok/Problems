#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,c;
    int b;
    cin >> a >> b >> c;
    double ans = 0;
    if(b==0) {
        ans = a * 2.455;
    } else {
        ans = a * 1.26;
    }
    cout << fixed << setprecision(2) << ans << " ";
    if(ans > c) cout << "T_T\n";
    else cout << "^_^\n";
    return 0;
}