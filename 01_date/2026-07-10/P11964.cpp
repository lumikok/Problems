// 洛谷 普及-
// 图论，DFS，记忆化
// 第一次：错；

#include <bits/stdc++.h>
using namespace std;

const int maxn = 505;
int n,m,k;
vector<int> g[maxn];
int vis[maxn][maxn];

void dfs(int u,int step) {
    if(vis[u][step] == 1) return;
    vis[u][step] = 1;
    if(step == k) return;
    step++;
    for(int v : g[u]) {
        dfs(v,step);
    }
}

int main()
{
    cin >> n >> m >> k;
    for(int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 1;i <= n;i++) {
        memset(vis,0,sizeof(vis));
        dfs(i,0);
        for(int j = 1;j <= k;j++) {
            int ans = 0;
            for(int a = 1;a <= n;a++) {
                ans += vis[a][j];
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}


