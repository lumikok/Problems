#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> sz;
int n;

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
}

bool same(int x, int y) {
    return find(x) == find(y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> n >> m;

    parent.resize(n + 1);
    sz.resize(n + 1);

    init();

    while (m--) {
        int op, x, y;
        cin >> op >> x >> y;

        if (op == 1) {
            unite(x, y);
        } else {
            cout << (same(x, y) ? "Y\n" : "N\n");
        }
    }

    return 0;
}
