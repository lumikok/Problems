// 洛谷
// DFS 染色，经典染色扩散

#include <bits/stdc++.h>
using namespace std;

int x,y;
const int maxn = 505;
char g[maxn][maxn];
bool vis[maxn][maxn];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void dfs(int sx,int sy) {
    vis[sx][sy] = true;
    for(int i = 0;i < 4;i++) {
        int nx = sx + dx[i];
        int ny = sy + dy[i];
        if(nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
        if(g[nx][ny] == '*' || vis[nx][ny]) continue;
        dfs(nx,ny);
    }
}

int main() {
    cin >> x >> y;
    for(int i = 0;i < x;i++) {
        cin >> g[i];  // 直接输入字符串
    }
    // 从边界开始扩散
    for(int i = 0;i < x;i++) {
        for(int j = 0;j < y;j++) {
            if((i == 0 || i == x-1 || j == 0 || j == y-1) && g[i][j] == '0' && !vis[i][j]) {
                dfs(i,j);
            }
        }
    }
    int ans = 0;
    for(int i = 0;i < x;i++) {
        for(int j = 0;j < y;j++) {
            if(g[i][j] == '0' && !vis[i][j]) ans++;
        }
    }
    cout << ans;
}