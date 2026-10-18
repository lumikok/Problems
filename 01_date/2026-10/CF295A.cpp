// 25min
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Operation {
    int l,r;
    ll d;
};

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n+2,0);
    vector<ll> diff(n+2,0);
    vector<Operation> ops(m+2);
    vector<ll> opDiff(m+2,0);
    vector<ll> cnt(m+2,0);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        diff[i] = a[i] - a[i-1];
    }
    for(int i = 1;i <= m;i++) {
        cin >> ops[i].l >> ops[i].r >> ops[i].d;
    }
    for(int i = 1;i <= k;i++) {
        int x,y;
        cin >> x >> y;
        opDiff[x]++;
        opDiff[y+1]--;
    }
    for(int i = 1;i <= m;i++) {
        cnt[i] = opDiff[i] + cnt[i-1];
    }
    for(int i = 1;i <= m;i++) {
        int l = ops[i].l;
        int r = ops[i].r;
        ll d = ops[i].d;
        diff[l] += d * cnt[i];
        diff[r+1] -= d * cnt[i];
    }
    for(int i = 1;i <= n;i++) {
        a[i] = diff[i] + a[i-1];
        cout << a[i] << " ";
    }
    return 0;
}