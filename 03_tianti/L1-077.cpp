#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[24];
    for(int i = 0;i <= 23;i++) {
        cin >> a[i];
    }
    while(1) {
        int b;
        cin >> b;
        if(b < 0 || b > 23) break;
        if(a[b] > 50) cout << a[b] << " Yes\n";
        else cout << a[b] << " No\n";
    }
    return 0;
}