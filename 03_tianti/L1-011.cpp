// 需重新做
// 知识点：getline()，
// string ，输入遇到空格会

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A,B;
    bool removeChar[256] = {false};

    getline(cin, A);
    getline(cin, B);

    for(char c : B) {
        removeChar[(unsigned char)c] = true;
    }

    for(char c : A) {
        if(!removeChar[(unsigned char)c]) {
            cout << c;
        }
    }
    cout << '\n';
    return 0;
}