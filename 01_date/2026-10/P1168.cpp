// 10min
// 两个堆用来维护，方便直接取出中位数
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    priority_queue<int> big;
    priority_queue<int, vector<int>, greater<int>> small;
    for(int i = 1;i <= n;i++) {
        int x;
        cin >> x;

        if(big.empty() || x <= big.top()) {
            big.push(x);
        } else {
            small.push(x);
        }
        
        if(big.size() > small.size() + 1) {
            small.push(big.top());
            big.pop();
        }
        if (small.size() > big.size()) {
            big.push(small.top());
            small.pop();
        }

        if(i % 2 == 1) {
            cout << big.top() << '\n';
        }
    }
    return 0;
}