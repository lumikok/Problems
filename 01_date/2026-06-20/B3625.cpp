// BFS，普及-
// 迷宫
// 第一次：OK

#include <bits/stdc++.h>
using namespace std;

char g[105][105];
int n,m;
int ok[105][105];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> g[i][j];
        }
        
    }
    if(g[1][1] == '#') {
        cout << "No" << endl;
        return 0;
    }
    queue<pair<int,int>> q;
    q.push({1,1});
    memset(ok,-1,sizeof(ok));
    ok[1][1] = 1;
    while(!q.empty()) {
        auto it = q.front();
        q.pop();
        int x = it.first;
        int y = it.second;
        for(int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
            if(ok[nx][ny] != -1 || g[nx][ny] == '#') continue;
            ok[nx][ny] = 1;
            q.push({nx,ny});
        }
    }
    if(ok[n][m] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}