#include <bits/stdc++.h>
using namespace std;

int N,M,T;
int SX,SY,FX,FY;
int ma[7][7];
int vis[7][7];
int ans = 0;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void dfs(int x,int y) {
    if(x == FX && y == FY) {
        ans++;
        return;
    }
    for(int i = 0;i < 4;i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 1 && nx <= N && ny >= 1 && ny <= M && !ma[nx][ny] && !vis[nx][ny]) {
            vis[nx][ny] = true;
            dfs(nx,ny);
            vis[nx][ny] = false;
        }
    }
}

int main() {

    cin >> N >> M >> T;
    cin >> SX >> SY >> FX >> FY;
    
    while(T--) {
        int a,b;
        cin >> a >> b;
        ma[a][b] = 1;
    }

    vis[SX][SY] = 1;
    dfs(SX,SY);
    cout << ans << endl;
    return 0;
}
