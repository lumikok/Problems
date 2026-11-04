#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>> a(n,vector<int>(m,0));
    while(q--) {
        int op,t;
        cin >> op >> t;
        if(op == 0) {
            fill(a[t-1].begin(),a[t-1].end(),1);
        } else {
            for(int i = 0;i < n;i++) {
                a[i][t-1] = 1;
            }
        }
    }
    int count = 0;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(a[i][j] == 1) continue;
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}