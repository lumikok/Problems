// 需要重新写
// 模拟竖式除法
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int s = 0;
    int n = 0;
    while(s < x) {
        s = s * 10 + 1;
        n++;
    }

    while(true) {
        cout << s / x;

        s %= x;
        if(s == 0) {
            break;
        }
        s = s * 10 + 1;
        n++;
    }
    cout << " " << n << '\n';
    return 0;
}