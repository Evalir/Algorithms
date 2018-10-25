#include <bits/stdc++.h>
using namespace std;
char buf[1000010];
int PF[1000010];
int a[1000010];
int main() {
	scanf("%s", buf);
	string s = buf;
	memset(PF,0,sizeof(PF));
	memset(a,0,sizeof(a));
	for(int i = 0; i - 4 < (int)s.size(); i++)
		if (s[i] == 'm')
			if (s.substr(i,5) == "metal") a[i] = 1;
	
	for(int i = s.size()-1; i >= 0; i--) {
		PF[i] = a[i];
		PF[i] += PF[i+1];
	}
	int n = s.size();
	long long ans = 0;
	for(int i = 0; i - 4 < n; i++)
		if (s[i] == 'h') if (s.substr(i,5) == "heavy") ans += PF[i];
	
	cout << ans << endl;
}
