#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e,f;
    vector<int> arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> e >> f;
    vector<int> t;
    int max_num = max(arr[0],arr[1]);
    max_num = max(max_num,arr[2]);
    max_num = max(max_num,arr[3]);
    for(int i = 0;i < 4;i++) {
        if(max_num - arr[i] > f || arr[i] < e) {
            t.push_back(i+1);
        }
    }
    if((int)t.size() >= 2) cout << "Warning: please check all the tires!\n";
    else if((int)t.size() == 1) cout << "Warning: please check #" << t[0] << "!\n";
    else cout << "Normal\n";
    return 0;
}