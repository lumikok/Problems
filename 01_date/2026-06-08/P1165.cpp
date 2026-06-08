// 洛谷
// 栈，模拟，普及-
// 第一次：OK；模拟入栈、出栈、查询，只是不用记每个元素的值

#include <bits/stdc++.h>
using namespace std;
int f[200001],n,x,y,t=0;

int main()
{
    cin >> n;
    f[0] = 0;
    while(n--) {
        cin >> x;
        if(x == 0) {
            cin >> y;
            t++;
            f[t] = max(f[t-1],y);
        }
        else if(x == 1 && t!=0) t--;
        else cout << f[t] << endl;
    }
    return 0;
}