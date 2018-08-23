#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin >> n >> d;
    vector<int> p(n);
    for(int i = 0; i < n; i++)
	cin >> p[i];
    bool done = false;
    int ans = 0;
    sort(p.begin(), p.end());
    int end = n-1;
    while(!done) {
	done = true;
	if (abs(p[0]-p[end]) > d)
	    done = false;
	--end;
	++ans;
   }
   cout << ans << endl;
   return 0;
}
