#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

typedef struct arr{
    int b,p,e;
} arr;
arr a[105];

typedef struct node{
    int cnt;
    int time;
} node;
node dp[105][105];

bool cmp(node &a,node &b) {
    if(a.cnt != b.cnt) {
        return a.cnt > b.cnt;
    }
    return a.time < b.time;
}

void solve() {
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].b >> a[i].p >> a[i].e; 
    }
    int m,r;
    cin >> m >> r;
    for(int i = 1;i <= n;i++) {
        for(int j = m;j >= a[i].b;j--) {
            for(int k = r;k >= a[i].p;k--) {
                node temp = dp[j-a[i].b][k-a[i].p];
                temp.cnt++;
                temp.time+=a[i].e;

                if(cmp(temp,dp[j][k])) {
                    dp[j][k] = temp;
                }
            }
        }
    }
    cout << dp[m][r].time << '\n';
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