// 洛谷 普及-
// 贪心，前缀和
// 第一次：对
// 无需整理

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e5 + 5;
int a[maxn];
ll pre[maxn];
int n;

int main()
{
    pre[0] = 0;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    ll ans = 0;
    for(int i = 2;i <= n;i++) {
        if(pre[i] < 0) continue;
        ans += pre[i];
    }
    cout << ans << endl;
    return 0;
} 