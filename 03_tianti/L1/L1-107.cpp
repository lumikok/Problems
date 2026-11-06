#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,s,t;
    cin >> T >> s >> t;
    if(T > 35 && s == 1 && t >= 33) {
        cout << "Bu Tie\n";
        cout << T << '\n';
    } else if(s == 1 && (T <= 35 || t < 33)) {
        cout << "Bu Re\n";
        cout << t << '\n';
    } else if(s == 0 && (T > 35 && t >= 33)) {
        cout << "Shi Nei\n";
        cout << T << '\n';
    } else if(s == 0 && (T <= 35 || t < 33)) {
        cout << "Shu Shi\n";
        cout << t << '\n';
    }
    return 0;
}