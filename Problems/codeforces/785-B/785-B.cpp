#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
bool comp1(pii first, pii second) { return first.second < second.second;}
bool comp2(pii first, pii second) { return first.first < second.first; }
vector<pii> st,et;

int main() {
	int n;
	cin >> n;
	st.resize(n);
	for(auto& i : st)
		cin >> i.first >> i.second;
	int m;
	cin >> m;
	et.resize(m);
	for(auto& i : et)
		cin >> i.first >> i.second;
	sort(st.begin(),st.end(),comp1);
	sort(et.begin(),et.end(), comp2);
	ll ans = et[et.size()-1].first - st[0].second;
	sort(st.begin(),st.end(),comp2);
	sort(et.begin(),et.end(),comp1);
	ans = max(ans, 1LL*st[st.size()-1].first - et[0].second);
	if (ans >= 0)
		cout << ans << endl;
	else
		cout << 0 << endl;
 	return 0;
}
