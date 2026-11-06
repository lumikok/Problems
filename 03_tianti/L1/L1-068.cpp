#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double ans = 0.0;
    for(int i = 0;i < n;i++) {
        double a;
        cin >> a;
        ans += 1/a;
    }
    ans = ans / n;
    cout << fixed << setprecision(2) << 1/ans << '\n';
    return 0;
}