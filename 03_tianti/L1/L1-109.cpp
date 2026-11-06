// 小写字母减去96得到字母编号从1开始
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> a(27);
    for(int i = 1;i <= 26;i++) {
        cin >> a[i];
    }
    int ans = 0;
    vector<int> cnt(26,0);
    for(char c : s) {
        int x = c - 96; 
        ans += a[x];
        cnt[x-1]++;
    }
    int flag = 1;
    for(int t : cnt) {
        if(!flag) cout << " ";
        cout << t;
        flag = 0;
    }
    cout << '\n';
    cout << ans << '\n';
    return 0;
}