/*
数组与基础编码的基线证据：
读入 n 个整数，输出其中“第二大的不同元素”；若不存在，输出 NO。
要求：
- 使用 C++。
- 不允许排序。
- 只扫描一次。
- 注意重复值和负数。
- 由你独立编写、运行并测试；完成后贴出代码和测试结果。
例：5 / 3 7 7 2 5 应输出 5。
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max1 = 0,max2 = 0;
    bool has1 = false;
    bool has2 = false;

    while(n--) {
        int x;
        cin >> x;

        if(!has1 || x > max1) {

            if(has1) {
                max2 = max1;
                has2 = true;
            }
            max1 = x;
            has1 = true;
        } else if (x < max1 && (!has2 || x > max2)) {
            max2 = x;
            has2 = true;
        }
    }
    if(has2) {
        cout << max2;
    } else {
        cout << "NO";
    }
    return 0;
}