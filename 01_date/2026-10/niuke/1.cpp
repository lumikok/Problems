#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,m,k;
        cin >> n >> k >> m;
        string s;
        cin >> s;

        int kong = k;
        int ans = 0;

        for(char c : s) {
            if (c == '0') {
                kong = min(n,kong+1);
            } else {
                if(kong > 0) {
                    kong--;
                } else {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}