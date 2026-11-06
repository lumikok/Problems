#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c[11];
    for(int i = 0;i < 11;i++) {
        string s;
        getline(cin,s);
        c[i] = (int)s.size();
    }
    for(int i = 0;i < 11;i++) {
        cout << c[i];
    }
    return 0;
}