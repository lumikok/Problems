#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int ans = 0;
    for(int i = 0;i < m;i++) {
        int t;
        cin >> t;
        ans += t;
    }
    int p = n * (m-1);
    cout << max(0,ans-p) << '\n';
    return 0;
}