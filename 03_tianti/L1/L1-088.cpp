// 需要重新做
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, s;
    cin >> n >> k >> s;

    int cnt[300] = {};
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int g, p;
        cin >> g >> p;

        if(g < 175) continue;

        if(p >= s) {
            ans++;
        }
        else if(cnt[g] < k) {
            cnt[g]++;
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
