#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        bool ok = true;
        vector<ll> a(m+1);
        vector<ll> pre(m+1);
        pre[0] = 0;
        for(int i = 1;i <= m;i++) {
            cin >> a[i];
            pre[i] = pre[i-1] + a[i];
            if(pre[i] < i * (i + 1) / 2) {
                ok = false;
            }

        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}