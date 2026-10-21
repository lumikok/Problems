// 20min
// BFS
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 2005;

char g[maxn][maxn];
int dist[maxn][maxn];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void solve() {
    int n,m;
    cin >> n >> m;
    queue<pair<int,int>> q;

    int sx = -1,sy = -1,ex = -1,ey = -1;
    for(int i = 0;i < n;i++) {
        cin >> g[i];
        for(int j = 0;j < m;j++) {
            dist[i][j] = -1;
            if(g[i][j] == 'm') {
                sx = i;
                sy = j;
            } else if(g[i][j] == 'd') {
                ex = i;
                ey = j;
            }
        }
    }

    dist[sx][sy] = 0;
    q.push({sx,sy});
    while(!q.empty()) {
        auto current = q.front();
        int x = current.first;
        int y = current.second;
        q.pop();

        if(x == ex && y == ey) {
            cout << dist[x][y] << endl;
            return;
        }

        for(int k = 0;k < 4;k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(g[nx][ny] == '#') continue;
            if(dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }
    }
    cout << "No Way!\n";
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