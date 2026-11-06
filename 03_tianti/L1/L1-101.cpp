// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> ban(n);

    for(int i = 0; i < n; i++) {
        cin >> ban[i];
    }

    int k;
    cin >> k;

    cin.ignore();

    string s;
    getline(cin, s);

    // covered[i] 表示该位置是否已经被违禁词覆盖
    vector<bool> covered(s.size(), false);

    // len[i] 表示从 i 开始的违禁词长度
    vector<int> len(s.size(), 0);

    int cnt = 0;

    // 按照输入顺序处理违禁词
    for(string word : ban) {

        int pos = 0;

        while((pos = s.find(word, pos)) != string::npos) {

            bool overlap = false;

            // 检查是否与之前处理的违禁词重叠
            for(int j = pos; j < pos + (int)word.size(); j++) {
                if(covered[j]) {
                    overlap = true;
                    break;
                }
            }

            if(overlap) {
                pos++;
                continue;
            }

            // 记录违禁词
            cnt++;
            len[pos] = word.size();

            for(int j = pos; j < pos + (int)word.size(); j++) {
                covered[j] = true;
            }

            // 从当前违禁词末尾继续查找
            pos += word.size();
        }
    }

    // 判断是否达到警告阈值
    if(cnt >= k) {
        cout << cnt << '\n';
        cout << "He Xie Ni Quan Jia!\n";
    }
    else {
        // 输出替换后的文本
        for(int i = 0; i < (int)s.size();) {

            if(len[i] > 0) {
                cout << "<censored>";
                i += len[i];
            }
            else {
                cout << s[i];
                i++;
            }
        }

        cout << '\n';
    }

    return 0;
}
