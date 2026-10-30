#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, M;
    cin >> T >> M;

    vector<vector<int>> dp(M + 1, vector<int>(T + 1, 0));
    vector<int> cost(M + 1), value(M + 1);

    for (int i = 1; i <= M; i++) {
        cin >> cost[i] >> value[i];
    }

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= T; j++) {

            dp[i][j] = dp[i - 1][j];

            if (j >= cost[i]) {
                dp[i][j] = max(
                    dp[i][j],
                    dp[i - 1][j - cost[i]] + value[i]
                );
            }
        }
    }

    cout << dp[M][T] << '\n';

    return 0;
}
