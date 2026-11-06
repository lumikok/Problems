// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int n;
    cin >> c >> n;
    cin.ignore();

    vector<string> a(n), b(n);

    for(int i = 0; i < n; i++) {
        getline(cin, a[i]);
    }

    bool same = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i] += a[n-1-i][n-1-j];

            if(a[i][j] != a[n-1-i][n-1-j]) {
                same = false;
            }
        }
    }

    if(same) cout << "bu yong dao le\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << (b[i][j] == '@' ? c : b[i][j]);
        }
        cout << '\n';
    }

    return 0;
}

