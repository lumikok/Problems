#include <bits/stdc++.h>
using namespace std;

typedef struct arr {
    int t,c,p;
} arr;

using ll = long long;
const int maxn = 1e5 + 10;
arr a[maxn];
int dp[maxn];

void solve() {
    string s1,s2;
    cin >> s1 >> s2;
    int n;
    cin >> n;
    int p1 = s1.find(":");
    int p2 = s2.find(":");

    int h1 = stoi(s1.substr(0,p1));
    int m1 = stoi(s1.substr(p1+1));
    int h2 = stoi(s2.substr(0,p2));
    int m2 = stoi(s2.substr(p2+1));
    int t1 = h1*60 + m1;
    int t2 = h2*60 + m2;
    int d = t2 - t1;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].t >> a[i].c >> a[i].p;
    }
    for(int i = 1;i <= n;i++) {
        int cnt = a[i].p;
        if(cnt == 0) {
            for(int j = a[i].t;j <= d;j++) {
                dp[j] = max(dp[j],dp[j-a[i].t]+a[i].c);
            }
            continue;
        }
        for(int k = 1;cnt > 0;k*=2) {
            int num = min(k,cnt);
            int t = num * a[i].t;
            int c = num * a[i].c;
            cnt -= num;

            for(int j = d;j >= t;j--) {
                dp[j] = max(dp[j],dp[j-t] + c);
            }
        }
    }
    cout << dp[d] << '\n';
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