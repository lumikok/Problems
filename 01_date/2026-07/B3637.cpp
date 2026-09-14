// 洛谷 普及-
// 线性DP，最长上升子序列类问题
// 第一遍：错（忘记了）
// 需回顾重写

#include <bits/stdc++.h>
using namespace std;

int n;
const int maxn = 5010;
int dp[maxn];
int a[maxn];

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    int ans = 1;
    for(int i = 1;i <= n;i++) {
        dp[i] = 1;
        for(int j = 1;j <= i-1;j++) {
            if(a[j] < a[i]) {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans << endl;
    return 0;
}