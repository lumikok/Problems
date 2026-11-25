// BFS
// OK。外套一圈来进行扩散标记，没扩散到的0进行替换。
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 35;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
int a[maxn][maxn];
bool vis[maxn][maxn];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n;

void bfs(int x,int y) {
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y] = true;

    while(!q.empty()) {
        int rx = q.front().first;
        int ry = q.front().second;
        q.pop();
        for(int i = 0;i < 4;i++) {
            int nx = rx + dx[i];
            int ny = ry + dy[i];

            if(nx >= 0 && nx <= n+1 && ny >= 0 && ny <= n+1 && !vis[nx][ny] && a[nx][ny] == 0) {
                vis[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }
}

void solve() {
    cin >> n;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i <= n+1;i++) {
        for(int j = 0;j <= n+1;j++) {
            if(i == 0 || i == n+1 || j == 0 || j == n+1) {
                if(a[i][j] == 0 && !vis[i][j])
                    bfs(i,j);
            }
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            if(a[i][j] == 0 && !vis[i][j]) {
                cout << 2 << " ";
            } else {
                cout << a[i][j] << " ";
            }
        }
        cout << '\n';
    }
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