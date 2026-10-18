// 8min
// lower_boundµÄÓÃ·¨
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n+1,0),pre(n+1,0);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    int m;
    cin >> m;
    while(m--) {
        ll q;
        cin >> q;
        int pos = lower_bound(pre.begin(),pre.end(),q) - pre.begin();
        cout << pos << endl;
    }
    return 0;
}