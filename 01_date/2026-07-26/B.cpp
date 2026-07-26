#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if(x==y) {
        cout << 1 << endl;
        return 0;
    }
    int a,b,c,d;
    int ans = 0;
    for(a = x;a <= y;a++) {
        for(b = x;b <= y;b++) {
            for(c = x;c <= y;c++) {
                for(d = x;d <= y;d++) {
                    if(a * d != b * c) continue;
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}