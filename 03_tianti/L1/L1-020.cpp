#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool hasfriend[100000] = {false};

    for(int i = 0;i < n;i++) {
        int k;
        cin >> k;
        for(int j = 0;j < k;j++) {
            int id;
            cin >> id;

            if(k > 1) {
                hasfriend[id] = true;
            }
        }
    }
    int m;
    cin >> m;

    bool isprint[100000] = {false};
    bool first = true;
    bool found = false;
    for(int i = 0;i < m;i++) {
        int id;
        cin >> id;

        if(!hasfriend[id] && !isprint[id]) {
            if(!first) {
                cout << " ";
            }
            cout << setw(5) << setfill('0') << id;
            first = false;
            found = true;
            isprint[id] = true;
        }
    }
    if (!found) {
        cout << "No one is handsome";
    }
    cout << '\n';
    return 0;
}