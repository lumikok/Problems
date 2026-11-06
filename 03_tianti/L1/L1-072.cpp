// 需要重新做
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][4] = {};
    int sum = 0;
    int x, y;

    int num[] = {
        0, 1, 2, 3, 4, 5, 10000, 36, 720,
        360, 80, 252, 108, 72, 54, 180,
        72, 180, 119, 36, 306, 1080, 144,
        1800, 3600
    };

    // 1. 输入矩阵
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    // 2. 恢复缺失数字
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            if(a[i][j] == 0) {
                a[i][j] = 45 - sum;
            }
        }
    }

    // 3. 查询三个位置
    for(int i = 0; i < 3; i++) {
        cin >> x >> y;
        cout << a[x][y] << '\n';
    }

    // 4. 选择行、列或对角线
    int fx;
    cin >> fx;

    int ans = 0;

    for(int i = 1; i <= 3; i++) {
        if(fx >= 1 && fx <= 3) {
            ans += a[fx][i];
        }
        else if(fx >= 4 && fx <= 6) {
            ans += a[i][fx - 3];
        }
        else if(fx == 7) {
            ans += a[i][i];
        }
        else {
            ans += a[i][4 - i];
        }
    }

    // 5. 输出奖金
    cout << num[ans] << '\n';

    return 0;
}
