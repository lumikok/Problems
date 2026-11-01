#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    double ans = (double)(n * k/10.0);
    cout << fixed << setprecision(2) << ans << '\n';
    return 0;
}