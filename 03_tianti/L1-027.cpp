// 需要重新做
// 映射
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    int cnt[10] = {0};
    int pos[10];

    for(char c : s) {
        cnt[c - '0']++;
    }
    vector<int> arr;

    for(int i = 9;i >= 0;i--) {
        if(cnt[i] > 0) {
            pos[i] = arr.size();
            arr.push_back(i);
        }
    }
    cout << "int[] arr = new int[]{";
    for(int i = 0;i < arr.size();i++) {
        if(i > 0) cout << ",";
        cout << arr[i];
    }
    cout << "};\n";

    cout << "int[] index = new int[]{";
    for(int i = 0;i < s.size();i++) {
        if(i > 0) cout << ",";
        cout << pos[s[i] - '0'];
    }
    cout << "};\n";

    return 0;
}