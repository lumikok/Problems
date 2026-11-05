#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << b - a << '\n';
    if(b - a <=0) {
        cout << "hai sheng ma?\n";
    } else if(b - a > 250) {
        cout << "jiu ting tu ran de...\n";
    } else {
        cout << "nin tai cong ming le!\n";
    }
    return 0;
}