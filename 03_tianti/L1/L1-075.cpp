#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size() == 4) {
        if(s.substr(0,2) < "22") {
            cout << 20;
        } else {
            cout << 19;
        }
        cout << s.substr(0,2) << "-" << s.substr(2) << '\n';
    } else {
        cout << s.substr(0,4) << "-" << s.substr(4) << '\n';
    }
    return 0;
}