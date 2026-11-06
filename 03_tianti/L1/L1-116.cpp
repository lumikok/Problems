#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n--) {
        int t;
        cin >> t;
        if(t < 1700) count++;
    }
    cout << count << '\n';
    return 0;
}