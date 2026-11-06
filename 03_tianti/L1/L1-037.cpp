#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(b==0) {
        cout << a << "/" << b << "=" << "Error\n";
        return 0;
    }
    double ans = (double)a/b;
    if(b < 0) {
        cout << a << "/(" << b << ")=" << fixed << setprecision(2) << ans << '\n'; 
    } else {
        cout << a << "/" << b << "=" << fixed << setprecision(2) << ans << '\n';
    }
    return 0;
}