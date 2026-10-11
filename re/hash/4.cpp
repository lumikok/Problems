// 应用变式：
// 统计网页访问日志。输入 n 个用户名，再查询 q 个用户名的访问次数，最后输出日志中不同用户的数量。查询陌生用户不能影响这个数量。

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string,int> freq;
    while(n--) {
        string s;
        cin >> s;
        freq[s]++;
    }
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        auto it = freq.find(s);
        cout << (it == freq.end() ? 0 : it->second) << '\n';
    }
    cout << freq.size() << endl;
    return 0;
}