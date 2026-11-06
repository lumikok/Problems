// setw(5)占五个字符宽度
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int count = 0;
    int sum = 0;
    for(int i = a;i <= b;i++) {
        cout << setw(5) << i;
        count++;
        sum+=i;
        if(count % 5 == 0 || i==b) {
            cout << '\n';
        }
    }
    cout << "Sum = " << sum << '\n';
    return 0;
}