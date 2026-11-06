// 需要重新写
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string s;
        getline(cin,s);
        int pos1 = s.find(',');
        int pos2 = s.find('.');
        if(pos1 < 3 || pos2 < 3) {
            cout << "Skipped\n";
            continue;
        }   
        if(s.substr(pos1-3,3) == "ong" && s.substr(pos2-3,3) == "ong") {
            int cnt = 0;
            int k = (int)s.size() - 1;
            for(;k>=0;k--) {
                if(s[k]==' ') {
                    cnt++;
                    if(cnt==3) break;
                }
            }
            cout << s.substr(0,k) << " qiao ben zhong.\n";
        }  else {
            cout << "Skipped\n";
        }
    }
    return 0;
}