#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pa,pb,a,b,c;
    cin >> pa >> pb >> a >> b >> c;
    int ansa = pa;
    int ansb = pb;
    if(a == 0) ansa++;
    else ansb++;
    if(b == 0) ansa++;
    else ansb++;
    if(c == 0) ansa++;
    else ansb++;
    cout << "The winner is ";
    if((ansa > ansb && ansa - pa > 0) || (ansa - pa == 3)) cout << "a: " << pa << " + " << ansa - pa << '\n';
    else cout << "b: " << pb << " + " << ansb - pb << '\n';
    return 0;
}