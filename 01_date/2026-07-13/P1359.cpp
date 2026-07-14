// 洛谷 普及-
// DP，图论，最短路，有权图
// 第一次：错
// 用最短路再做一次

#include <bits/stdc++.h>
using namespace std;

const int maxn = 205;
int a[maxn][maxn];
int dp[maxn];
int n;
const int INF = 1e9;

int main()
{
    cin >> n;
    for(int i = 1;i <= n-1;i++) {
        for(int j = i + 1;j <= n;j++) {
            cin >> a[i][j];
        }
    }

    fill(dp,dp + n + 1,INF);
    dp[1] = 0;
    for(int j = 2;j <= n;j++) {
        for(int i = 1;i < j;i++) {
            dp[j] = min(dp[j],dp[i] + a[i][j]);
        }
    }
    cout << dp[n] << endl;
    return 0;
}