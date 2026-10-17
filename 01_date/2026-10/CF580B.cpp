// 24min
// pair的用法，默认排序按照第一个值

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,d;
    cin >> n >> d;
    vector<pair<ll,ll>> v;
    for(int i = 0;i < n;i++) {
        ll m,s;
        cin >> m >> s;
        v.push_back({m,s});
    }
    sort(v.begin(),v.end());

    vector<ll> pre(n+1,0);
    ll ans = 0;
    for(int i = 0;i < n;i++) {
        pre[i+1] = pre[i] + v[i].second;
    }
    int l=0,r=0;
    ans = v[0].second;
    while(r < n-1) {
        r++;
        while(v[r].first - v[l].first >= d) {
            l++;
        }
        ans = max(ans,pre[r+1] - pre[l]);
    }
    cout << ans << endl;
    return 0;
}