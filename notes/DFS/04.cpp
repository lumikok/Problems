#include <iostream>
using namespace std;

int nums[] = {1,2,3};
int used[4] = {0};
int perm[4] = {0};
int depth = 0; // 当前深度

void dfs() {
    if(depth == 3) {
        for(int i = 1;i <= 3;i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1;i <= 3;i++) {
        if(!used[i]) {
            depth++;
            used[i] = 1;
            perm[depth] = nums[i-1];
            dfs();
            perm[depth] = 0; // 回溯
            depth--;
            used[i] = 0;
        }
    }
}

int main() {
    dfs();
    return 0;
}
