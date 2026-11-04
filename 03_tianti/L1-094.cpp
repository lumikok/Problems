#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    while(n--) {
        int a,b;
        string s1,s2;
        cin >> a >> b >> s1 >> s2;

        string temp = s.substr(a-1,b-a+1);

        s.erase(a-1,b-a+1);

        int pos = s.find(s1 + s2);

        if(pos != string::npos) {
            s.insert(pos + s1.size(), temp);
        } else {
            s += temp;
        }
    }
    cout << s << '\n';
    return 0;
}