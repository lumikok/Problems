#include <bits/stdc++.h>
using namespace std;

const int maxn = 505;
int board[maxn][maxn];
int n,m,x,y;

int dx[] = {1,1,-1,-1,2,2,-2,-2};
int dy[] = {2,-2,2,-2,1,-1,1,-1};

void bfs() {
    queue<pair<int,int>> q;
    board[x][y] = 0;
    q.push({x,y});
    while(!q.empty()) {
        auto cur = q.front();
        q.pop();
        int nx = cur.first;
        int ny = cur.second;

        for(int i = 0;i < 8;i++) {
            int ax = nx + dx[i];
            int ay = ny + dy[i];

            if(ax >= 1 && ax <= n && ay >= 1 && ay <= m && board[ax][ay] == -1) {
                board[ax][ay] = board[nx][ny] + 1;
                q.push({ax,ay});
            }
        }
    }
}

int main() {
    cin >> n >> m >> x >> y;
    memset(board,-1,sizeof(board));
    bfs();
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}