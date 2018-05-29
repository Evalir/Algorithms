#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef unsigned long long ull;
int main() {
	int n;
	cin >> n;
	vector<ull> si(n);
	vector<ull> ri(n);

	vector<ull> lis(n+10);
	vector<ull> ans(n+10);
	map<int,ull> BS;
	BS[1] = 1000000000;
	int l1 = 0,l2 = 0,l3 = 0;
	bool f2 = true, f3 = true, f1 = true;
	BS[2] = 1000000000;
	BS[3] = 1000000000;
	BS[4] = 1000000000;
	for(int i = 0; i < n; i++)
		cin >> si[i];
	for(int i = 0; i < n; i++)
		cin >> ri[i];

	for(int i = 0; i < si.size(); i++) {
    	lis[i] = 1;
    	if (ri[i] < ri[l1]) {
    		l1 = i;
    		BS[1] = ri[i];
    	}
    	for(int k = 0; k < i; k++) {
    		if (si[k] < si[i]) {
    			lis[i] = max(lis[i], lis[k]+1);
    			if (lis[i] == 2) {
    				if (f2) {
    					cerr << "TOOK l2 " << si[i] << ' ' << ri[i] << endl;
    					BS[2] = BS[1] + ri[i];
    					l2 = i;
    					f2 = false;
    				}
    				else {
    					if (ri[l2] > ri[i] && l1 < l2 && l2 < l3) {
    						BS[2] = BS[1] + ri[i];
    						l2 = i;
    					}
    					else if (ri[l2] > ri[i] && l1 < l2) {
    						cerr << "TOOK l2 " << si[i] << ' ' <<ri[i]<< endl;
    						BS[2] = BS[1] + ri[i];
    						l2 = i;
    					}
    				}
    			}
    			if (lis[i] == 3) {
    				if (f3) {
    					cerr << "TOOK l3 " << si[i] << ' ' << ri[i] << endl;
    					BS[3] = BS[2] + ri[i];
    					l3 = i;
    					f3 = false;
    					if (l1 < l2 && l2 < l3)
    						BS[4] = min(BS[4], BS[3]);
    				}
    				else {
    					if (ri[l3] > ri[i] && l2) {
    						cerr << "TOOK l3 " << si[i] << ' ' << ri[i] <<  endl;
    						BS[3] = BS[2] + ri[i];
    						l3 = i;
    						if (l1 < l2 && l2 < l3)
    							BS[4] = min(BS[4], BS[3]);

    					}
    			}
    		}
    	}
    }
	}
    cout << BS[4] << endl;
    return 0;
}