#include <bits/stdc++.h>
using namespace std;

int get_ans(int n) {
    int a = 1;
    int ans = 1;
    for(int i = 2;i <= n;i++) {
        a *= i;
        ans += a;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << get_ans(n) << '\n';
    return 0;
}