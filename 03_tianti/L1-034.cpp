// 需要重新做
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt[1001] = {0};

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
    }

    int maxCnt = 0;
    int ans = 0;

    for (int i = 1; i <= 1000; i++) {
        if (cnt[i] >= maxCnt) {
            maxCnt = cnt[i];
            ans = i;
        }
    }

    cout << ans << " " << maxCnt << '\n';

    return 0;
}
