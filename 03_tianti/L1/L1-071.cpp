// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    while(m--) {
        string s;
        cin >> s;

        int ans = 0;

        for(int i = 0;i < n;i++) {
            ans *= 2;
            if(s[i] == 'n') {
                ans += 1;
            }
        }
        cout << ans+1 << '\n';
    }
    return 0;
}