// 并查集巧用，二维转换并查集id，图搜索转换为并查集关系，集合大小处理
// OK；可重写，或找类似解法题
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e6 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
int n,m;
int fa[maxn],sz[maxn];
string s[maxn];

int dx[] = {0,1};
int dy[] = {1,0};

int id(int x,int y) {
    return (x-1) * n + y;
}

void init() {
    for(int i = 1;i <= n*n;i++) {
        fa[i] = i;
        sz[i] = 1;
    }
}

int find(int x) {
    if(fa[x] != x) {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}

void unite(int x,int y) {
    x = find(x);
    y = find(y);

    if(x == y) return;

    fa[x] = y;
    sz[y] += sz[x];
}

void solve() {
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> s[i];
        s[i] = " " + s[i];
    }
    init();
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            for(int k = 0;k < 2;k++) {
                int x = i + dx[k];
                int y = j + dy[k];

                if(x > n || y > n) continue;
                if(s[i][j] != s[x][y]) {
                    unite(id(i,j),id(x,y));
                }
            }
        }
    }
    while(m--) {
        int x,y;
        cin >> x >> y;

        cout << sz[find(id(x,y))] << '\n';
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