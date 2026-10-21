// 13min
// ∂‡‘¥BFS
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 505;
int dist[maxn][maxn];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void solve() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    memset(dist,-1,sizeof(dist));

    queue<pair<int,int>> q;

    for(int i = 0;i < a;i++) {
        int x,y;
        cin >> x >> y;
        if(dist[x][y] == -1) {
            dist[x][y] = 0;
            q.push({x,y});
        }
    }

    vector<pair<int,int>> load(b);
    for(int i = 0;i < b;i++) {
        cin >> load[i].first >> load[i].second;
    }

    while(!q.empty()) {
        auto it = q.front();
        int x = it.first;
        int y = it.second;
        q.pop();
        for(int k = 0;k < 4;k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
            if (dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }
    }

    for(auto it : load) {
        int x = it.first;
        int y = it.second;
        cout << dist[x][y] << '\n';
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