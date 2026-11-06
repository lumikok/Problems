#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a == 2 || b == 1) {
        cout << "-" << '\n';
        if(a == 2 || a == 0) {
            cout << "stop\n";
            return 0;
        }
        if(b == 1) cout << "move\n";
        return 0;
    }
    if(a == 0) {
        cout << "biii\n" << "stop\n";
        return 0;
    }
    if(a == 1) {
        cout << "dudu\n" << "move\n";
    }
    return 0;
}