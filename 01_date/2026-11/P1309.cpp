// 归并排序：使用其中的合并步骤
// 变式：天然有序的两个数组合并，避免多次排序
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 2e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;
typedef struct arr{
    int id,s,w;
} arr;

arr a[maxn],win[maxn],lose[maxn];

bool cmp(arr &a,arr &b) {
    if(a.s == b.s) {
        return a.id < b.id;
    }
    return a.s > b.s;
}

void solve() {
    int N,r,q;
    cin >> N >> r >> q;
    int n = 2 * N;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].s;
        a[i].id = i;
    }
    for(int i = 1;i <= n;i++) {
        cin >> a[i].w;
    }
    sort(a+1,a+n+1,cmp);

    while(r--) {
        int x = 0;
        int y = 0;

        for(int i = 1;i <= n;i+=2) {
            if(a[i].w > a[i+1].w) {
                a[i].s++;
                win[++x] = a[i];
                lose[++y] = a[i+1];
            } else {
                a[i+1].s++;
                win[++x] = a[i+1];
                lose[++y] = a[i];
            }
        }
        int i = 1,j = 1,k = 1;
        while(i <= N && j <= N) {
            if(cmp(win[i],lose[j])) {
                a[k++] = win[i++];
            } else {
                a[k++] = lose[j++];
            }
        }
        while(i <= N) a[k++] = win[i++];
        while(j <= N) a[k++] = lose[j++];
    }
    cout << a[q].id << '\n';
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