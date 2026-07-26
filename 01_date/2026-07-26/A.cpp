#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    long long ans = 0;
    while(n--) {
        int m;
        cin >> m;
        if(m==t) ans += 2;
        if(abs(m-t) == 1 || abs(m-t) == 2) ans += 1;
    }
    cout << ans << endl;
    return 0;
}