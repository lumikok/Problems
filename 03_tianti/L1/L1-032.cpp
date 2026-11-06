#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;

    cin.ignore();

    string s;
    getline(cin,s);
    if(s.size() >= n) {
        cout << s.substr(s.size() - n) << '\n';
    } else {
        cout << string(n-s.size(),c) << s << '\n';
    }
    return 0;
}