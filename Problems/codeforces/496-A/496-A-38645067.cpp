#include <bits/stdc++.h>
using namespace std;
int main(){ 
	int n;
	cin >> n;
	vector<int> d(n);
	for(int i = 0; i < n; i++)
		cin >> d[i];
	int ans  = 1000000000;
	for(int i = 1; i < n-1; i++) {
		int curr = 0;
		for(int j = 0; j < n-1; j++) {
		    if (j+1 == i)
				curr = max(curr, d[j+2]-d[j]);
			else if (j != i)
				curr =  max(curr, d[j+1]-d[j]);
			else
				continue;
		}
		ans = min(curr,ans);
	}   
	cout << ans << endl;
	return 0;
}