#include <bits/stdc++.h>
using namespace std;

bool iffound(queue<int>& q,int target) {
    if(q.empty()) {
        return false;
    }
    int size = q.size();
    bool found = false;

    for(int i =0;i < size;i++) {
        if(q.front() == target) {
            found = true;
        }
        int a = q.front();
        q.pop();
        q.push(a);
    }
    return found;
}
int main()
{
    int m,n;
    cin >> m >> n;

    vector<int> a(n);

    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    queue<int> q;
    q.push(a[0]);
    int count = 1;
    for(int i = 1;i < n;i++) {
        if(!iffound(q,a[i])) {
            count++;

            if(q.size() == m) {
                q.pop();
            }
            q.push(a[i]);
        }
    }
    cout << count << endl;
    return 0;
}