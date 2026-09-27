#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;

        vector<vector<int>> g(n+1);
        for(int i = 0;i < m;i++) {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(int i = 1;i <= n;i++) {
            sort(g[i].begin(),g[i].end());
        }

        ll total = 1LL * n *(n-1)/2;
        ll a = total - m;

        if(a <= n-1) {
            cout << a << endl;
            for(int i = 1;i <= n;i++) {
                for(int j = i+1;j <= n;j++) {
                    if(!binary_search(g[i].begin(),g[i].end(),j)) {
                        cout << i << " " << j << endl;
                    }
                }
            }
        } else {
            int c = 1;
            for(int i = 2;i <= n;i++) {
                if(g[i].size() > g[c].size()) {
                    c = i;
                }
            }

            vector<int> x(n+1,0);
            for(int v : g[c]) {
                x[v] = 1;
            }

            int k = n - 1 - (int)g[c].size();
            cout << k << endl;
            for(int i = 1;i <= n;i++) {
                if(i != c && !x[i]) {
                    cout << c << " " << i << endl;
                }
            }
        }
    }
    return 0;
}