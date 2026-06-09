// 洛谷
// BFS，队列
// 第一遍：no；注意边界处理

#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 5;

int bfs(int start,int target){
    if(start == target) return 0;
    if(start > target) return start - target;

    queue<int> q;
    int dist[maxn];
    memset(dist,-1,sizeof(dist));
    
    q.push(start);
    dist[start] = 0;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        int next[] = {cur+1,cur-1,cur * 2};
        for(int i = 0;i < 3;i++) {
            int nex = next[i];
            if(nex >= 0 && nex <= maxn && dist[nex] == -1) {
                dist[nex] = dist[cur] + 1;
                if(nex == target) return dist[nex];
                q.push(nex);
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x,y;
        cin >> x >> y;
        cout << bfs(x,y) << endl;
    }
    return 0;
}