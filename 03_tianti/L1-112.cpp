// 需要重新做
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val,x,y;
};

bool cmp(Node &a,Node &b) {
    return a.val > b.val;
}

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> a(n,vector<int>(m));
    vector<Node> v;

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> a[i][j];
            v.push_back({a[i][j],i,j});
        }
    }
    sort(v.begin(),v.end(),cmp);

    vector<bool> row(n,false);
    vector<bool> col(m,false);
    int cnt = 0;

    for(auto t : v) {
        if(cnt == k) break;

        if(row[t.x] || col[t.y]) continue;
        row[t.x] = true;
        col[t.y] = true;
        cnt++;
    }
    for(int i = 0;i < n;i++) {
        if(row[i]) continue;

        bool first = true;
        for(int j = 0;j < m;j++) {
            if(col[j]) continue;

            if(!first) cout << " ";
            cout << a[i][j];
            first = false;
        }
        cout << '\n';
    }
    return 0;
}