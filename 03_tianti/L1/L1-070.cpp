#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int cnt = 0;
    int first = 0;
    int t = 0;
    for(int i = 1;;i++) {
        string s;
        getline(cin,s);
        if(s == ".") {
            t = i-1;
            break;
        }
        if(s.find("chi1 huo3 guo1") != string::npos) {
            if(!first) cnt = i;
            first = 1;
            count++;
        }
    }
    cout << t << '\n';
    if(count == 0) {
        cout << "-_-#\n";
    } else {
        cout << cnt << " " << count << '\n';
    }
    return 0;
}