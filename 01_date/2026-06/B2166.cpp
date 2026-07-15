#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }

    while(m--) {
        int q;
        cin >> q;

        auto it = lower_bound(a.begin(),a.end(),q);
        if(it != a.end() && *it == q) {
            cout << (it - a.begin() + 1) << '\n';
        } else {
             cout << "-1\n";
        }
    }
    return 0;
}