#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    int m = sqrt((n+1) / 2);
    int ans = 2 * m * m - 1;

    for(int i = 0;i < m;i++) {
        for(int j = 0;j < i;j++) cout << " ";
        for(int j = 0;j < 2*(m-i)-1;j++) cout << c;
        cout << endl;
    }
    for(int i = 1;i < m;i++) {
        for(int j = 0;j < m - i - 1;j++) cout << " ";
        for(int j = 0;j < 2 * i + 1;j++) cout << c;
        cout << endl;
    }
    cout << n-ans << endl;
    return 0;
}