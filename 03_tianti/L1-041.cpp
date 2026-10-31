#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    int ans = 0;
    int x;
    bool first = false;
    while(cin >> x) {
        cnt++;
        if(x == 250 && !first){
            first = true;
            ans = cnt;
        }
    }
    cout << ans << '\n';
    return 0;
}