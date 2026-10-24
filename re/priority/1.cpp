// 大根堆
// priority_queue<int> q;
// 小根堆
// priority_queue<int,vector<int>,greater<int>> q;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> q;
    while(n--) {
        int o;
        cin >> o;
        if(o == 1) {
            int x;
            cin >> x;
            q.push(x);
        }
        if(o == 2) {
            if(q.empty()) {
                cout << "EMPTY" << endl;
                continue;
            }
            cout << q.top() << endl;
            q.pop();
        }
    }
}