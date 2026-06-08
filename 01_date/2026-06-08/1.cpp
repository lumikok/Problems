#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i = 0;i < n;i++) cin >> b[i];
        if(n==2) {
            int x = max(b[0],b[1]);
            int y = min(b[0],b[1]);
            cout << x << " " << y << endl;
            continue;
        }

        sort(b.begin(),b.end(),greater<int>());

        bool ok = true;
        for (int i = 0; i < n - 2; ++i) {
            if (b[i] % b[i + 1] != b[i + 2]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            cout << b[0] << " " << b[1] << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}