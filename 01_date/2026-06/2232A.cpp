// CF
// 贪心 A
// 第一次：对
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int max_f = 1,cur = 1;
        for(int i = 1;i < n;i++) {
            if(a[i] == a[i-1]) cur++;
            else {
                max_f = max(max_f,cur);
                cur = 1;
            }
        }
        max_f = max(max_f,cur);
        int ans = min(n-max_f,n/2);
        cout << ans << endl;
    }
    return 0;
}