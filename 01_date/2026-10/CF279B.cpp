// 15min
// 学到的技巧：边输入边维护窗口
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n,t;
    cin >> n >> t;
    vector<int> a;
    int l = 0,r = -1;
    ll length = 0;
    int ans = 0;
    for(int i = 0;i < n;i++) {
        int b;
        cin >> b;
        a.push_back(b);

        r++;
        length += b;

        while(length > t && l <= r) {
            length -= a[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }

    cout << ans << endl;
    return 0;
}