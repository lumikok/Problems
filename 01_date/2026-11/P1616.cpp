#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e4 + 5;
const int maxt = 1e7 + 5;

int t[maxn];
int w[maxn];
long long dp[maxt];
int T,m;

int main()
{
    cin >> T >> m;
    for(int i = 1;i <= m;i++) {
        cin >> t[i] >> w[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i = 1;i <= m;i++) {
        for(int j = t[i];j <= T;j++) {
            dp[j] = max(dp[j],dp[j-t[i]] + w[i]);
        }
    }
    cout << dp[T] << endl;
    return 0;
}