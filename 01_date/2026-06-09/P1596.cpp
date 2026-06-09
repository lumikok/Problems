// 洛谷
// BFS，连通块；普及-
// 连通块经典题型：从符合的点出发，标记连通的所有点，每次搜索块数加1

#include <bits/stdc++.h>
using namespace std;

int n,m;
char g[105][105];
bool vis[105][105];

int dx[] = {0,0,1,1,1,-1,-1,-1};
int dy[] = {1,-1,0,1,-1,0,1,-1};

void bfs(int sx,int sy) {
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy] = 1;
    while(!q.empty()) {
        auto cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;
        for(int i = 0;i < 8;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && g[nx][ny] == 'W' && !vis[nx][ny]) {
                vis[nx][ny] = 1;
                q.push({nx,ny});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> g[i];
    }
    int count = 0;
    for(int i = 0; i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(g[i][j] == 'W' && !vis[i][j]) {
                count++;
                bfs(i,j);
            }
        }
    }
    cout << count << endl;
    return 0;
}