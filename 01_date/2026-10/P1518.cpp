// 30min
// ´¿Ä£Äâ

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

char g[11][11];

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool vis[10][10][4][10][10][4];

void solve() {

    int fx,fy,cx,cy;

    for(int i = 0;i < 10;i++) {
        cin >> g[i];
        for(int j = 0;j < 10;j++) {
            if(g[i][j] == 'F') {
                fx = i;
                fy = j;
            }
            if(g[i][j] == 'C') {
                cx = i;
                cy = j;
            }
        }
    }

    int fd = 0,cd = 0;
    int ans = 0;

    while(1) {

        if(vis[fx][fy][fd][cx][cy][cd]) {
            cout << "0\n";
            return;
        }

        vis[fx][fy][fd][cx][cy][cd] = true;

        if(fx == cx && fy == cy) {
            cout << ans << "\n";
            return;
        }

        int nfx = fx + dx[fd];
        int nfy = fy + dy[fd];

        if(nfx < 0 || nfx >= 10 ||
           nfy < 0 || nfy >= 10 ||
           g[nfx][nfy] == '*') {
            fd = (fd + 1) % 4;
           }
        else {
            fx = nfx;
            fy = nfy;
        }

        int ncx = cx + dx[cd];
        int ncy = cy + dy[cd];

        if(ncx < 0 || ncx >= 10 ||
           ncy < 0 || ncy >= 10 ||
           g[ncx][ncy] == '*') {
            cd = (cd + 1) % 4;
           }
        else {
            cx = ncx;
            cy = ncy;
        }
        ans++;

        if(fx == cx && fy == cy) {
            cout << ans << "\n";
            return;
        }   
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