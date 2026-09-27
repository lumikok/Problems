// 约瑟夫问题
// 模拟，队列

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    queue<int> q;
    for(int i = 1;i <= n;i++) {
        q.push(i);
    }
    while(!q.empty()) {
        for(int i = 1;i < m;i++) {
            int p = q.front();
            q.pop();
            q.push(p);
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}