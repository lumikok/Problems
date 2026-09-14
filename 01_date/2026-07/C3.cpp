#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    int ans = 1e9 + 1;
    while(n--) {
        for(int i = 0;i < m;i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ans = min(ans,a[m-1]);
    }
    cout << ans << endl;
    return 0;
}