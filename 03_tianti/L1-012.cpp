// «Û√›
#include <bits/stdc++.h>
using namespace std;

int f_pow(int a,int b) {
    int ans = 1;
    while(b>0) {
        if(b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout  << "2^" << n << " = "<< f_pow(2,n) << '\n';
    return 0;
}