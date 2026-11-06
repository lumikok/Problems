// 四舍五入 round()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    int l = round(n/2.0);    // n/2 是错的，默认整数写法
    for(int i = 1;i <= l;i++) {
        for(int j = 1;j <= n;j++) {
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}