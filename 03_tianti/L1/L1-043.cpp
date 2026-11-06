// 需要重新做
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--) {
        int start[1001] = {0};
        bool borrowed[1001] = {false};

        int cnt = 0;
        int sum = 0;

        while(true) {
            int id,h,m;
            char op,c;

            cin >> id >> op >> h >> c >> m;

            if(id == 0) break;
            
            int now = h*60 + m;

            if(op == 'S') {
                start[id] = now;
                borrowed[id] = true;
            } else if(op == 'E' && borrowed[id]) {
                sum += now - start[id];
                cnt++;
                borrowed[id] = false;
            }
        }
        if(cnt == 0) {
            cout << "0 0\n";
        } else {
            cout << cnt << " " << round((double)sum / cnt) << '\n';
        }
    }
    return 0;
}