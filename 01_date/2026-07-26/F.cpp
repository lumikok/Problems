#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<ll> dp(m+1,0);
        vector<pair<int,int>> a;

        for(int i = 0;i < n;i++) {
            int w,v,c;
            cin >> w >> v >> c;
            if(c == 1) {
                for(int j = m;j >= w;j--) {
                    dp[j] = max(dp[j],dp[j-w] + v);
                }
            } else {
                a.push_back({w,v});
            }
        }
        ll ans = dp[m];

        for(auto [w,v] : a) {
            for(int i = 0;i * w <= m;i++) {
                ans = max(ans,1LL * i * v + dp[m-i*w]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}