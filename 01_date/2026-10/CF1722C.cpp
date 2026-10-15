// 12min
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<string,int> mp;
        vector<string> s[3];
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < n;j++) {
                string word;
                cin >> word;
                s[i].push_back(word);
                mp[word]++;
            }
        }
        int score[3] = {0};
        for(int i = 0;i < 3;i++) {
            for (string word : s[i]) {
                if(mp[word] == 1) score[i] += 3;
                else if(mp[word] == 2) score[i] += 1;
            }
        }
        cout << score[0] << " " << score[1] << " " << score[2] << " " << endl;
    }
    return 0;
}