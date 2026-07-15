// 洛谷
// 二分，数学

#include <bits/stdc++.h>
using namespace std;
double s,a,b,s1,s2,t1,t2;

int main() {
    cin >> s >> a >> b;
    s1 = 0;
    s2 = s;
    do {
        double x = (s1 + s2) / 2;
        double c = x / b;
        double d = (x - c * a) / (a + b);
        t1 = c + (s - x) / a;
        t2 = c + d + (s - (c + d) * a) / b;
        if(t1 < t2) {
            s2 = x;
        } else {
            s1 = x;
        }
    } while(fabs(t1 - t2) > 1e-8);  // 注意此处 1e-8边界条件：双精度浮点数二分判断常用边界，以及考虑输出精度为6位小数，避免超时
    printf("%.6lf",t1);
    return 0;
}