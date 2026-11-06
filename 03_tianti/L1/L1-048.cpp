// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1;
    cin >> r1 >> c1;
    vector<vector<int>> a(r1, vector<int>(c1));
    for(int i = 0;i < r1;i++) {
        for(int j = 0;j < c1;j++) {
            cin >> a[i][j];
        }
    }
    int r2,c2;
    cin >> r2 >> c2;
    vector<vector<int>> b(r2, vector<int>(c2));
    for(int i = 0;i < r2;i++) {
        for(int j = 0;j < c2;j++) {
            cin >> b[i][j];
        }
    }
    if(c1 != r2) {
        cout << "Error: " << c1 << " != " << r2 << '\n';
        return 0;
    } else {
        vector<vector<int>> ans(r1, vector<int>(c2, 0));
        for(int i = 0;i < r1;i++) {
            for(int j = 0;j < c2;j++) {
                for(int k = 0;k < c1;k++) {
                    ans[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << r1 << " " << c2 << '\n';
        for(int i = 0; i < r1; i++) {
            for(int j = 0;j < c2;j++) {
                if(j > 0) cout << " ";
                cout << ans[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}