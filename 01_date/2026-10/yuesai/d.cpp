// 85分，wrong answer
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef struct B{
	ll b;
	int inx;
} B;

bool cmp(B b1,B b2) {
	// 关键就在这里，细节
	if(b1.b == b2.b) {
		return b1.inx < b2.inx;
	} else {
		return b1.b > b2.b;
	}
}

int main()
{
	ll n,m;
	cin >> n >> m;
	vector<ll> a(n);
	vector<B> c(m);
	
	for(int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for(int i = 0;i < m;i++) {
		cin >> c[i].b;
		c[i].inx = i+1;
	}
	sort(c.begin(),c.end(),cmp);
	for(int i = 0;i < n;i++) {
		ll l = 0;
		ll r = m-1;
		while(l < r) {
			ll mid = (r-l)/2 + l;
			if(c[mid].b > a[i]) {
				l = mid + 1;
			} else {
				r = mid;
			}
		}
		if(l == m-1 && c[l].b > a[i]) cout << 0 << " " << 0 << '\n';
		else cout << c[l].b << " " << c[l].inx << '\n';
	}
	return 0;
}