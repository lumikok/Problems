// 洛谷
// 排序，STL，去重
// 第一遍：错；
// 考查了 set 的用法

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int> s;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    for(int x : s) {
        cout << x << " ";
    }
    return 0;
}