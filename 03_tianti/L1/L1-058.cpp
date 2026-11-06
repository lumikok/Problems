#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,res;
    getline(cin,s);

    int i = 0;
    while(i < (int)s.size()) {
        if(s[i] == '6') {
            int j = i;
            while(j < (int)s.size() && s[j] == '6') j++;
            int cnt = j - i;

            if(cnt <= 3) res += string(cnt,'6');
            else if(cnt > 3 && cnt <= 9) res += '9';
            else res += "27";
            i = j;
        } else {
            res += s[i++];
        }
    }
    cout << res << '\n';
    return 0;
}