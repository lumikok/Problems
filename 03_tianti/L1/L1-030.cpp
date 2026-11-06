#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> boy;
    vector<string> girl;
    vector<int> cnt;
    for(int i = 0;i < n;i++) {
        int a;
        string name;
        cin >> a >> name;
        cnt.push_back(a);
        if(a==0) boy.push_back(name);
        else girl.push_back(name);
    }
        for(int i = 0;i < n/2;i++) {
            if(!boy.empty() && !girl.empty()) {
                if(cnt[i] == 0) {
                    cout << boy.front() << " " << girl.back() << '\n';
                    boy.erase(boy.begin());
                    girl.erase(girl.end() - 1);
            } else {
                cout << girl.front() << " " << boy.back() << '\n';
                girl.erase(girl.begin());
                boy.erase(boy.end() - 1);
            }
            }
        }
    return 0;
}