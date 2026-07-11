// 洛谷，普及-
// 前缀和
// 第一次：对
// 无需整理

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 2e5 + 5;
int a[maxn];
int n;
ll pre[maxn];

int main()
{
    cin >> n;
    pre[0] = 0;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    ll ans = 0;
    for(int i = 1;i <= n;i++) {
        ans += a[i] * (pre[n] - pre[i]);
    }
    cout << ans << endl;
    return 0;
}