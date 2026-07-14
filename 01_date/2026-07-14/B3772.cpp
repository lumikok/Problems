// 洛谷 普及-
// DFS。BFS
// 错，需重新写

#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
int n, m, k;
char g[maxn][maxn];

// 原 vis 改为记录“哪个水域访问过该格子”的编号（时间戳）
int vis[maxn * 2][maxn * 2];          // <-- 扩大范围容纳偏移
int dist[maxn * 2][maxn * 2];         // <-- 新增：记录到达步数
bool beach[maxn * 2][maxn * 2];       // <-- 新增：最终沙滩标记（去重用）
int curID = 0;                        // <-- 新增：当前水域编号

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int ans = 0;                          // <-- 全局计数

// 判断陆地：越界视为陆地
bool isLand(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) return true;
    return g[x][y] == '.';
}

void dfs(int x, int y, int step) {
    // 坐标偏移到正数（偏移量足够大，如 105）
    int u = x + 105, v = y + 105;

    // 如果当前格子已被当前水域访问过且步数更短，则剪枝
    if (vis[u][v] == curID && dist[u][v] <= step) return;

    vis[u][v] = curID;
    dist[u][v] = step;

    if (isLand(x, y)) {               // 是陆地 → 标记沙滩
        if (!beach[u][v]) {
            beach[u][v] = true;
            ans++;
        }
    }

    if (step == k) return;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        // 不再判断 g[x][y] == '#'，允许水域继续扩展
        dfs(nx, ny, step + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> g[i];                  // <-- 用字符串读入一行，而非逐字符
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '#') {
                curID++;              // 新水域
                dfs(i, j, 0);
            }
        }
    }

    cout << ans << endl;
    return 0;
}