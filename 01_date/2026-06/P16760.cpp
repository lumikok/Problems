// 线性DP，普及-
// 第一遍：no

#include <bits/stdc++.h>
using namespace std;
int t,k;

int main() {
    int ans = 0;
    cin >> t;
    for(int i =0;i < t;i++) {
        cin >> k;

        int pre;
        cin >> pre;

        int dp[4] = {0,0,0,0}; // 前一个音符的最少违反规则次数

        for(int j = 2;j <= k;j++) {
            int cur;
            cin >> cur;

            int ndp[4]; // 当前音符的最少违反规则次数
            fill(ndp,ndp+4,INT_MAX); //填充方式
            
            // 遍历处理16种情况，取其中最少违反规则次数
            for(int m = 0;m < 4;m++) { // 当前音符映射到m
                for(int l = 0;l < 4;l++) { // 前一个音符映射到l
                    int now;
                    if(cur > pre) {
                        now = (m > l ? 0 : 1);
                    } else if (cur < pre) {
                        now = (m < l ? 0 : 1);
                    } else {
                        now = (m == l ? 0 : 1);
                    }
                    ndp[m] = min(ndp[m],dp[l] + now);
                }
            }
            memcpy(dp,ndp,sizeof(dp)); //复制
            pre = cur;
        }
        int ans = min({dp[0],dp[1],dp[2],dp[3]}); //求多个值的最小值的方法
        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
    return 0;
}
