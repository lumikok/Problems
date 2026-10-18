#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x == 0) {
        cout << "1";
    }
    if(x == 1) {
        cout << "12";
    }
    if(x == 2) {
        cout << "22";
    }
    if(x == 3) {
        cout << "222";
    }
    if(x > 3) {
        cout << "-1";
    }
    return 0;
    
}