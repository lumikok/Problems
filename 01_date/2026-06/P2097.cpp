// 洛谷
// 并查集，图论
// 第一遍：错；注意时间：按秩合并（高度）

#include <bits/stdc++.h>
using namespace std;
int fa[100100],n,m;
int size[100100];
int ans;
int find(int x) {
    if(x != fa[x]) {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}

void unite(int x,int y) {
    int r1 = find(x);
    int r2 = find(y);
    if(r1 == r2) return;
    if(size[r1] < size[r2]) {
        fa[r1] = r2;
    } else if (size[r1] > size[r2]) {
        fa[r2] = r1;
    } else {
        fa[r2] = r1;
        size[r1]++;
    }
    ans--;
}

int main()
{
    cin >> n >> m;
    ans = n;
    for(int i = 1;i <= n;i++) {
        fa[i] = i;
        size[i] = 0;
    }
    while(m--) {
        int a,b;
        cin >> a >> b;
        unite(a,b);
    }
    cout << ans;
    return 0;
}