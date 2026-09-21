#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& a) {
    if(a.empty()) return;

    // 找最大最小元素方法
    int max_val = *max_element(a.begin(),a.end());
    int min_val = *min_element(a.begin(),a.end());

    int n = max_val - min_val + 1;
    vector<int> counting(n);

    for(int i = 0;i < a.size();i++) {
        counting[a[i] - min_val]++;
    }

    for(int i = 1;i < n;i++) {
        counting[i] += counting[i-1];
    }

    vector<int> ans(a.size());
    for(int i = a.size() - 1;i >= 0;i--) {
        int index = counting[a[i] - min_val] - 1;
        ans[index] = a[i];
        counting[a[i] - min_val]--;
    }
    a = ans;
}