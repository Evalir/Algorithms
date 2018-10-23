#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
struct Event {
	ll x = 0;
	ll id = 0;
	bool ty;
};

bool comp1(Event a, Event b) {
	if (a.x != b.x)
		return a.x < b.x;
	return a.ty < b.ty;
}

ll go(vector<Event> &s, int id) {
	int cnt = 0;
	bool ok = false;
	ll lef, ans = 0;
	for(int i = 0 ; i < (int)s.size(); i++) {
		if (s[i].id == id)
			continue;
		if (s[i].ty == 0)
			cnt++;
		if (s[i].ty == 1)
			cnt--;
		//cout << "cnt is " << cnt << " with " << s[i].id << endl;
		if (cnt == n-1) {
			ok = true;
			//cout << "got " << n-1 << endl;
			lef = s[i].x;
		}
		if (cnt == n-2 && ok) {
			ans = max(ans, s[i].x - lef);
			break;
			//cout << "ri " << s[i].x << " id " << s[i].id << " ans " << ans << endl; 
		}
	}
	return ans;
}

int main() {
	cin >> n;
	vector<Event> s;
	vector<ll> L, R;
	for(int i = 0; i < n; i++) {
		ll l, r;
		cin >> l >> r;
		Event t;
		t.x = l;
		t.ty = false;
		t.id = i;
		s.push_back(t);
		t.ty = true;
		t.x = r;
		s.push_back(t);
		L.push_back(l);
		R.push_back(r);
	}
	ll ans = 0, cnt = 0;
	sort(s.begin(), s.end(), comp1);
	vector<int> cand(2);
	for(int i = 0; i < n; i++) {
		int& j = cand[0];
	   	if (L[i] > L[j] || L[i] == L[j] && R[i]-L[i] < R[j]-L[j])
	   		j = i;
	}
	for(int i = 0; i < n; i++) {
		int& j = cand[1];
		if (R[i] < R[j] || R[i] == R[j] && R[i]-L[i] < R[j]-L[j])
			j = i;
	}
	ans = max(go(s, cand[0]), go(s, cand[1]));
	cout << ans << endl;
	return 0;
}