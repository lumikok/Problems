#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int ans = 0;
	for(int i = 0;i < n;i++) {
		cin >> a[i];
		if(a[i] == 1) ans++;
	}
	if(2 * ans >= n) cout << "REBORN";
	else cout << "LOST";
	return 0; 
}