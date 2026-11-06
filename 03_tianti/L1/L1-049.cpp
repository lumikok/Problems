// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m[105];
    int ans[105][11][10] = {};

    int maxM = 0;

    for (int i = 0; i < n; i++) {
        cin >> m[i];
        maxM = max(maxM, m[i]);
    }

    int seat = 1;
    int last = -1;

    // 第一层：队伍编号
    for (int i = 0; i < maxM; i++) {

        // 第二层：队员编号
        for (int j = 0; j < 10; j++) {

            // 第三层：学校编号
            for (int k = 0; k < n; k++) {

                if (m[k] > i) {

                    if (last == k) {
                        seat++;
                    }

                    ans[k][i][j] = seat;

                    seat++;
                    last = k;
                }
            }
        }
    }

    // 输出
    for (int i = 0; i < n; i++) {
        cout << "#" << i + 1 << '\n';

        for (int j = 0; j < m[i]; j++) {
            for (int k = 0; k < 10; k++) {
                if (k > 0) cout << " ";
                cout << ans[i][j][k];
            }
            cout << '\n';
        }
    }

    return 0;
}