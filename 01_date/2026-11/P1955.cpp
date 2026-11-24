// 并查集 + 离散化
// 离散化：把分散的较大的值，转换为连续的较小的值。排序去重 + 二分映射下标
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 2e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

typedef struct arr {
    int x,y,e;
} arr;

int fa[maxn];
arr a[maxn];
vector<int> v;

void init(int n) {
    for(int i = 1;i <= n;i++) {
        fa[i] = i;
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
}

int get_id(int x) {
    return lower_bound(v.begin(), v.end(), x) - v.begin() + 1;
}

void solve() {
    int n;
    cin >> n;
    v.clear();

    for(int i = 1;i <= n;i++) {
        cin >> a[i].x >> a[i].y >> a[i].e;
        v.push_back(a[i].x);
        v.push_back(a[i].y);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    init(v.size());

    for(int i = 1;i <= n;i++) {
        if(a[i].e == 1) {
            int x = get_id(a[i].x);
            int y = get_id(a[i].y);
            unite(x, y);
        }
    }
    bool flag = true;

    for(int i = 1; i <= n; i++) {
        if(a[i].e == 0) {
            int x = get_id(a[i].x);
            int y = get_id(a[i].y);

            if(find(x) == find(y)) {
                flag = false;
                break;
            }
        }
    }

    cout << (flag ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}