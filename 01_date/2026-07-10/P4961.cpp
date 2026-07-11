// 洛谷 普及-
// DFS，模拟
// 第一次：错；

#include <bits/stdc++.h>
using namespace std;

const int maxn = 1005;
int g[maxn][maxn];
int n,m;
bool isSpace[maxn][maxn];
bool isDigit[maxn][maxn];
bool vis[maxn][maxn];

int dx[] = {1,1,1,-1,-1,-1,0,0};
int dy[] = {1,0,-1,1,0,-1,1,-1};

bool inMap(int x,int y) {
    if(x < 1 || x > n || y < 1 || y > m) return false;
    else return true;
}

bool hasmine(int x,int y) {
    for(int i = 0;i < 8;i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(inMap(nx,ny) && g[nx][ny] == 1) {
            return true;
        }
    }
    return false;
}

bool hasspace(int x,int y) {
    for(int i = 0;i < 8;i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(inMap(nx,ny) && isSpace[nx][ny]) {
            return true;
        }
    }
    return false;
}

void dfs(int x,int y) {
    vis[x][y] = true;
    for(int i = 0;i < 8;i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(inMap(nx,ny) && isSpace[nx][ny] && !vis[nx][ny]) {
            dfs(nx,ny);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> g[i][j];
        }
    }

    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            if(g[i][j] == 1) continue;

            if(!hasmine(i,j)) {
                isSpace[i][j] = true;
            } else {
                isDigit[i][j] = true;
            }
        }
    }
    int ans = 0;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            if(isSpace[i][j] && !vis[i][j]) {
                dfs(i,j);
                ans++;
            }
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            if(isDigit[i][j] && !hasspace(i,j)) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}