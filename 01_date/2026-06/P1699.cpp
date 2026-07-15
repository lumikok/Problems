// BFS，最短路
// 洛谷
// 第一遍：错

#include <bits/stdc++.h>
using namespace std;

char g[10][10];
int dist[10][10];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main()
{
    for(int i = 0;i < 10;i++) {
        cin >> g[i];
    }

    int bx,by,lx,ly;
    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10;j++) {
            if(g[i][j] == 'B') {
                bx = i;
                by = j;
            } else if(g[i][j] == 'L') {
                lx = i;
                ly = j;
            }
        }
    }
    memset(dist,-1,sizeof(dist));

    queue<pair<int,int>> q;
    q.push({bx,by});
    dist[bx][by] = 0;

    while(!q.empty()) {
        auto it = q.front();
        q.pop();
        int x = it.first;
        int y = it.second;
        if(x == lx && y == ly) break;

        for(int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= 10 || ny < 0 || ny >= 10) continue;
            if(g[nx][ny] == 'R') continue;
            if(dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }

    }
    cout << dist[lx][ly] - 1 << endl;
    return 0;
}