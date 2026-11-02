#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        int op,h,w;
        cin >> op >> h >> w;
        if(op == 1) {
            if(h == 130) cout << "wan mei! ";
            if(h > 130) cout << "ni li hai! ";
            if(h < 130) cout << "duo chi yu! ";
            if(w == 27) cout << "wan mei!\n";
            if(w > 27) cout << "shao chi rou!\n";
            if(w < 27) cout << "duo chi rou!\n";
        } else {
            if(h == 129) cout << "wan mei! ";
            if(h > 129) cout << "ni li hai! ";
            if(h < 129) cout << "duo chi yu! ";
            if(w == 25) cout << "wan mei!\n";
            if(w > 25) cout << "shao chi rou!\n";
            if(w < 25) cout << "duo chi rou!\n";
        }
    }
    return 0;
}