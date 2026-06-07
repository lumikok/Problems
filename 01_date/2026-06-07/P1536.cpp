// 洛谷
// 并查集，图论
// 第一遍：错；最开始想用DFS，但是无思路，转向并查集了

#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,fa[1010];

int find(int a) {
    if(a != fa[a]) {
        fa[a] = find(fa[a]);
    }
    return fa[a];
}

void unite(int x1,int x2) {
    int y1 = find(x1);
    int y2 = find(x2);
    fa[y1] = y2;
}

int main()
{
    while(1) {
        int ans = 0;
        cin >> n;
        if(n==0) return 0;
        cin >> m;
        for(int i = 1;i <= n;i++) {
            fa[i] = i;
        }
        for(int i = 1;i <= m;i++) {
            cin >> x >> y;
            unite(x,y);
        }
        for(int i = 1;i <= n;i++) {
            if(find(i) == i) {
                ans++;
            }
        }
        cout << ans - 1 << endl;
    }
    return 0;
}