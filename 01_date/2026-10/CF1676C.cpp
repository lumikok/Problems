// 13min

#include <bits/stdc++.h>
using namespace std;

string s[51];

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        for(int i = 0;i < n;i++) {
            cin >> s[i];
        }
        int ans = 900;
        for(int i = 0;i < n;i++) {
            for(int j = i + 1;j < n;j++) {
                int t = 0;
                for(int k = 0;k < m;k++) {
                    t += abs(s[i][k] - s[j][k]);
                }
                ans = min(ans,t);
            }
        }
        cout << ans << endl;
    }
    return 0;
}