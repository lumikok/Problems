#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    vector<int> cnt(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> b[i];
        cnt[i] = a[i] - b[i];
    }
    sort(cnt.begin(),cnt.end());
    ll ans = 0;
    for(int i = 0;i < n;i++) {
        if(i == n-1) break;
        int t = cnt[i];
        if(t <= 0) {
            int pos = upper_bound(cnt.begin(),cnt.end(),-t) - cnt.begin();
            int count = n - pos;
            ans += count;
        } else {
            ans += n - i - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}