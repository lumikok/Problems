// ∏Ò Ω–¥∑®
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    char c;
    cin >> h >> c >> m;

    if(h <= 12) {
        cout << "Only "
             << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << m 
             << ".  Too early to Dang.\n";
    } else {
        int cnt = h - 12;

        if(m > 0) {
            cnt++;
        }
        for(int i = 0;i < cnt;i++) {
            cout << "Dang";
        }

        cout << '\n';
    }
    return 0;
}