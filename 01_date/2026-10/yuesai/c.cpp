// 90£¬timeout
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	ll ans = 0;
	set<int> st;
	st.insert(0);
	st.insert(n+1);
	for(int i = 0;i < n;i++) {
		if(s[i] == '0') st.insert(i+1);
	}
	while(q--) {
		int i;
		cin >> i;
		if(s[i-1] == '0') continue;
		auto r = st.upper_bound(i);
		auto l = prev(r);
		st.insert(i);
		s[i-1] = '0';
		ans += *r - *l - 1;
	}
	cout << ans << endl;
	return 0;
}