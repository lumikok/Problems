#include <bits/stdc++.h>
using namespace std;

int ans(int a) {
    if(a <= 1) return 1;
    return a * ans(a-1);
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << ans(a+b) << '\n';
    return 0;
}