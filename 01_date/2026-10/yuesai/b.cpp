#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,n;
	string s;
	cin >> n >> x >> s;
	char c;
	if(x >= 0 && x <= 25) {
		c = 'A' + x;
	}
	else if(x >= 26 && x <= 51) {
		c = 'a' + x - 26;
	}
	else if(x >= 52 && x <= 61) {
		c = '0' + x-52;
	}
	else if(x == 62) {
		c = '+';
	}
	else {
		c = '/';
	}
	if(s.find(c) == -1) cout << -1;
	else cout << s.find(c) + 1;
	return 0;
}