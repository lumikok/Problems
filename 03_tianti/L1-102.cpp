#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> a(n+1);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    vector<int> cnt(n+1);
    while(1) {
        int id,c;
        cin >> id >> c;
        if(id == 0) break;
        cnt[id] += c;
    }
    double ans = 0;
    for(int i = 1;i <= n;i++) {
        cout << cnt[i] << '\n';
        ans += cnt[i] * a[i];
    }
    cout << fixed << setprecision(2) << ans << '\n';
    return 0;
}