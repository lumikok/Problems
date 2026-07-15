// Âå¹È
// ÏßÐÔDP£»ÆÕ¼°-
// OK

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
int dp[maxn];
int p[maxn];

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> p[i];
    dp[1] = p[1];
    int ans = dp[1];
    for(int i = 2;i <= n;i++) {
        dp[i] = max(dp[i-1] + p[i],p[i]);
        ans = max(ans,dp[i]); 
    }
    cout << ans;
    return 0;
}