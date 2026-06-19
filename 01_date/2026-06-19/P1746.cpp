// BFS，最短路
// 第一遍：OK

#include <bits/stdc++.h>
using namespace std;

const int maxn = 1010;
char g[maxn][maxn];
int n;
int dist[maxn][maxn];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            cin >> g[i][j];
        }
    }
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    queue<pair<int,int>> q;
    q.push({x1,y1});
    memset(dist,-1,sizeof(dist));
    dist[x1][y1] = 0;
    while(!q.empty()) {
        auto it = q.front();
        q.pop();
        int x = it.first;
        int y = it.second;
        if(x == x2 && y == y2) break;
        for(int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
            if(dist[nx][ny] != -1 || g[nx][ny] == '1') continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }
    }
    cout << dist[x2][y2] << endl;
    return 0;
}