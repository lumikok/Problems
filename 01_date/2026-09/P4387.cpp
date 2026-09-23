// 洛谷 P4387
// 判断出栈队列是否合法
// 模拟，栈

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        stack<int> st;
        for(int i = 0;i < n;i++) cin >> a[i];
        for(int i = 0;i < n;i++) cin >> b[i];
        int j = 0;
        for(int i = 0;i < n;i++) {
            st.push(a[i]);
            while(!st.empty() && j < n && st.top() == b[j]) {
                st.pop();
                j++;
            }
        }
        if(j==n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}