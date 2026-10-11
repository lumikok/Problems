// unorder_map

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int,int> freq;
    while(n--) {
        int x;
        cin >> x;
        freq[x]++;
    }
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        cout << freq[x] << endl;
    }
    return 0;
}

// 上述不存在时会创建新的键值
// 只读查询：
// auto it = freq.find(x);
// cout << (it == freq.end() ? 0 : it->second) << '\n';