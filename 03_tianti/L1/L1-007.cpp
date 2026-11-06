#include <bits/stdc++.h>
using namespace std;

string s1[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    for(int i = 0;i < s.size();i++) {
        if(s[i] == '-') cout << "fu";
        if(s[i] == '0') cout << s1[0];
        if(s[i] == '1') cout << s1[1];
        if(s[i] == '2') cout << s1[2];
        if(s[i] == '3') cout << s1[3];
        if(s[i] == '4') cout << s1[4];
        if(s[i] == '5') cout << s1[5];
        if(s[i] == '6') cout << s1[6];
        if(s[i] == '7') cout << s1[7];
        if(s[i] == '8') cout << s1[8];
        if(s[i] == '9') cout << s1[9];
        if(i < s.size()-1) cout << " ";
    }
    return 0;
}