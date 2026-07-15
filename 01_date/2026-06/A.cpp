#include <bits/stdc++.h>
using namespace std;

int cul(int a,int b) {
    return (a + b - 1) / b;
}

int with_ai(int n,int x,int y,int z) {
    if(x * z >= n) return cul(n,x);
    int s = n - x*z;
    return z + cul(s,x+10*y);

}

int without_ai(int n,int x,int y) {
    return cul(n,x+y);
}
int main()
{
    int t,n,x,y,z;
    cin >> t;
    while(t--) {
        cin >> n >> x >> y >> z;
        cout << min(with_ai(n,x,y,z),without_ai(n,x,y)) << endl;
    }
    return 0;
}