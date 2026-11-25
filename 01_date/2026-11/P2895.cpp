// BFS
// OK
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 305;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
int g[maxn][maxn];
bool vis[maxn][maxn];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
struct node{
    int x,y,t;
};

queue<node> q;

int bfs() {
    if(g[0][0] == 0) return -1;
    q.push({0,0,0});
    vis[0][0] = true;

    while(!q.empty()) {
        node now = q.front();
        q.pop();

        int x = now.x;
        int y = now.y;
        int t = now.t;

        if(g[x][y] == INF) return t;
        for(int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nt = t + 1;

            if(nx >= 0 && ny >= 0 && !vis[nx][ny] && nt < g[nx][ny]) {
                q.push({nx,ny,nt});
                vis[nx][ny] = true;
            }
        }
    }
    return -1;
}

void solve() {
    memset(g,INF,sizeof(g));
    int m;
    cin >> m;

    while(m--) {
        int x,y,t;
        cin >> x >> y >> t;
        g[x][y] = min(g[x][y],t);
        for(int i = 0;i < 4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0)
            g[nx][ny] = min(g[nx][ny],t);
        }
    }
    cout << bfs() << '\n';
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