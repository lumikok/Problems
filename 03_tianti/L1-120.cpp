// 需要重新做
// string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    while(n--) {
        int op;
        cin >> op;

        if(op == 1) {
            // 查找前三次出现的位置
            string s1;
            cin >> s1;

            int pos = 0;
            int cnt = 0;

            while(cnt < 3) {
                pos = s.find(s1, pos);

                if(pos == string::npos) break;

                if(cnt > 0) cout << " ";
                cout << pos;

                cnt++;
                pos++;  // 允许重叠
            }

            if(cnt == 0) {
                cout << -1;
            }

            cout << '\n';
        }

        else if(op == 2) {
            // 在指定位置插入字符串
            int p;
            string s2;

            cin >> p >> s2;

            s.insert(p, s2);

            cout << s << '\n';
        }

        else if(op == 3) {
            // 翻转指定区间
            int l, r;
            cin >> l >> r;

            reverse(s.begin() + l, s.begin() + r + 1);

            cout << s << '\n';
        }
    }

    return 0;
}
