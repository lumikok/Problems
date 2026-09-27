// 向上取整
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    double count = a * (1.0/3.0) + b * (1.0/4.0);
    double result = ceil(count);
    cout << result << endl;
    return 0;
}