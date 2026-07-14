#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        vector<int> ans(a);

        int e = 2;
        int o = 1;

        for(int i = 0;i < a;i++) {
            if(i % 2 == 0) {
                ans[i] = e;
                e += 2;
            } else {
                ans[i] = o;
                o += 2;
            }
        }
        for(int v : ans) {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}