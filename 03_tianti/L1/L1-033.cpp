// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,n;
    cin >> y >> n;
    int o = y;
    while(1) {
        string s = to_string(y);
        while(s.size() < 4) {
            s = '0' + s;
        }
        set<char> st;

        for(char c : s) {
            st.insert(c);
        }
        if(st.size() == n) {
            cout << y - o << " ";
            // 确保输出至少为4 - setw(4)，不足的地方补0
            cout << setw(4) << setfill('0') << y << '\n';
            break;
        }
        y++;
    }
    return 0;
}