#include <bits/stdc++.h>
using namespace std;

struct Node {
    int x;
    int y;
    int t;
};

bool cmp(Node &a,Node &b) {
    return a.t < b.t;
}

vector<int> parent;
vector<int> sz;
int n,cnt;

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);

    if (x == y) return;

    if (sz[x] > sz[y]) swap(x, y);

    parent[x] = y;
    sz[y] += sz[x];
    cnt--;
}

bool same(int x, int y) {
    return find(x) == find(y);
}

int main()
{
    int m;
    cin >> n >> m;
    if(n==1) {
        cout << 0 << '\n';
        return 0;
    }
    parent.resize(n+1);
    sz.resize(n+1);
    vector<Node> N(m);
    cnt = n;
    init();
    for(int i = 0;i < m;i++) {
        cin >> N[i].x >> N[i].y >> N[i].t;
    }
    sort(N.begin(),N.end(),cmp);
    for(int i = 0;i < m;i++) {
        unite(N[i].x,N[i].y);
        if(cnt == 1) {
            cout << N[i].t << '\n';
            break;
        }
        if(i == m-1) {
            cout << -1 << '\n';
            break;
        }
    }
    return 0;
}