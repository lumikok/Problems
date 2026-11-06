#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int a,b;
        a = 0;
        b = 0;
        string s1 = s.substr(0,3);
        string s2 = s.substr(3);
        for(int i = 0;i < s1.size();i++) {
            a += s1[i] - '0';
            b += s2[i] - '0';
        }
        if(a == b) {
            cout << "You are lucky!\n";
        } else {
            cout << "Wish you good luck.\n";
        }
    }
    return 0;
}