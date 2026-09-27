#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    long long ans = 0;
    while(x <= y) {
        ans += x / z;
        x++;
    }
    cout << ans << endl;
    return 0;
}