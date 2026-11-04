// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n0,n1,n;
    cin >> n0 >> n1 >> n;
    int diff = INT_MAX;
    int ans1 = 0, ans2 = 0;
    for(int i = 1;i < n;i++) {
        int j = n-i;

        if(n0 % i != 0 || n1 % j != 0) continue;

        int x = n0 / i;
        int y = n1 / j;

        if(x < 2 || y < 2) continue;
        int t = abs(x-y);

        if(t < diff) {
            diff = t;
            ans1 = i;
            ans2 = j;
        }
    }
    if(diff == INT_MAX) {
        cout << "No Solution\n";
    } else {
        cout << ans1 << " " << ans2 << '\n';
    }
    return 0;
}