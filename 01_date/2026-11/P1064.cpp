// 30min
// 带条件的分组背包：把方案作为物品，单组内依旧01背包

#include <bits/stdc++.h>
using namespace std;

typedef struct arr{
    int v,w;
} arr;

using ll = long long;
const int maxn = 4e4;
arr a[65];
bool isMain[65];
vector<arr> group[65];
vector<arr> goods[65];
ll dp[maxn];

void solve() {
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= m;i++) {
        int v,w,q;
        cin >> v >> w >> q;
        if(q==0) {
            a[i] = {v,v*w};
            isMain[i] = true;
        } else {
            group[q].push_back({v,v*w});
        }
    }
    for(int i = 1;i <= m;i++) {
        if(!isMain[i]) continue;
        
        int v = a[i].v;
        int w = a[i].w;

        goods[i].push_back({v,w});
        if(group[i].size() >= 1) {
            goods[i].push_back({
                v + group[i][0].v,
                w + group[i][0].w
            });
        }
        if(group[i].size() >= 2) {
            goods[i].push_back({
                v + group[i][1].v,
                w + group[i][1].w
            });
            goods[i].push_back({
                v + group[i][0].v + group[i][1].v,
                w + group[i][0].w + group[i][1].w
            });
        }
    }
    for(int i = 1;i <= m;i++) {
        if(goods[i].empty()) continue;
        for(int j = n;j >= 0;j--) {
            for(auto t : goods[i]) {
                if(j >= t.v) {
                    dp[j] = max(dp[j],dp[j-t.v] + t.w);
                }
            }
        }
    }
    cout << dp[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}