#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        if(a == 1) {
            cout << 1 << endl;
            continue;
        }
        if(a == 2) {
            cout << -1 << endl;
            continue;
        }
        vector<int> ans(a);
        ll sum = 0;
        ll m = 1;
        for(int i = 1;i <= a;i++) {
            m = m * i;
        }
        for(int i = 0;i < a-1;i++) {
            sum += i+1;
        }
        ans[a-1] = m - sum;
        for(int v : ans) {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}