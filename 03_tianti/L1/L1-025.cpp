#include <bits/stdc++.h>
using namespace std;

int check(string s) {
    if(s.empty()) return -1;

    int num = 0;
    for(char c : s) {
        if(c < '0' || c > '9') {
            return -1;
        }
        num = num*10 + (c-'0');
    }
    if(num < 1 || num > 1000) return -1;
    return num;
}

int main()
{
    string s;
    getline(cin,s);

    int pos = s.find(' ');
    string s1 = s.substr(0,pos);
    string s2 = s.substr(pos+1);

    int a = check(s1);
    int b = check(s2);
    if(a==-1) cout << "?";
    else cout << a;

    cout << " + ";

    if(b==-1) cout << "?";
    else cout << b;

    cout << " = ";
    if(a==-1 || b==-1) cout << "?\n";
    else cout << a + b << '\n';
    return 0;
}