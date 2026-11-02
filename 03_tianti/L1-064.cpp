// 需要重新写
#include <bits/stdc++.h>
using namespace std;

// 判断是否属于单词字符
bool isWord(char c)
{
    return isalnum((unsigned char)c);
}

// 判断当前位置是否匹配一个独立单词或短语
bool match(string &s, int pos, string word)
{
    int len = word.size();

    if(pos + len > (int)s.size()) return false;

    if(s.substr(pos, len) != word) return false;

    if(pos > 0 && isWord(s[pos - 1])) return false;

    if(pos + len < (int)s.size() && isWord(s[pos + len])) return false;

    return true;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        string s;
        getline(cin, s);

        // 1. 原样输出
        cout << s << '\n';

        // 2. 合并空格、删除行首行尾空格和标点前空格
        string t;

        for(char c : s) {
            if(c == ' ') {
                if(!t.empty() && t.back() != ' ') {
                    t += c;
                }
            }
            else {
                if(ispunct((unsigned char)c)) {
                    while(!t.empty() && t.back() == ' ') {
                        t.pop_back();
                    }
                }
                t += c;
            }
        }

        if(!t.empty() && t.back() == ' ') {
            t.pop_back();
        }

        // 3. 大写字母转小写，I 除外
        for(char &c : t) {
            if(c >= 'A' && c <= 'Z' && c != 'I') {
                c = c - 'A' + 'a';
            }
        }

        // 4. 从左到右处理替换
        string ans;

        for(int i = 0; i < (int)t.size();) {

            // 优先匹配较长短语
            if(match(t, i, "could you")) {
                ans += "I could";
                i += 9;
            }
            else if(match(t, i, "can you")) {
                ans += "I can";
                i += 7;
            }
            else if(match(t, i, "I")) {
                ans += "you";
                i++;
            }
            else if(match(t, i, "me")) {
                ans += "you";
                i += 2;
            }
            else {
                if(t[i] == '?') {
                    ans += '!';
                }
                else {
                    ans += t[i];
                }
                i++;
            }
        }

        cout << "AI: " << ans << '\n';
    }

    return 0;
}
