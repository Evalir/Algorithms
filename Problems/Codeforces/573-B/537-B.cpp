#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#define TAKE 1
#define IGNORE 2
#define BASE 3
using namespace std;
vector<int> v;
int memo[70][1000005];
int NEXT[70][1000005];

int joa(int pt, int rem) {
	int ans;
	if (rem == 0) {
        NEXT[pt][rem] = BASE;
		return 0;
	}
	if (pt < 0) {
		return 1000000;
	}
	if (memo[pt][rem] != -1) {
        return memo[pt][rem];
    }
	if (rem - v[pt] < 0) {
	 	NEXT[pt][rem] = IGNORE;
        return memo[pt][rem] = joa(pt-1, rem);
    }
	else {
		int y = joa(pt-1, rem);
		int x = 1 + joa(pt, rem - v[pt]);
		if (x <= y) {
            ans = x;
            NEXT[pt][rem] = TAKE;
        }
        else {
            ans = y;
            NEXT[pt][rem] = IGNORE;
        }
	}
	memo[pt][rem] = ans;
	return ans;
}
vector<int> numz;
void getAns(int pt, int rem) {
  if (pt < 0)
    return;
  
  if (NEXT[pt][rem] == BASE)
    return;

  if (NEXT[pt][rem] == TAKE) {
    numz.push_back(v[pt]);
    getAns(pt, rem - v[pt]);
  }
  if (NEXT[pt][rem] == IGNORE)
    getAns(pt-1, rem);

  return;
}

int main() {
	int n;
	cin >> n;                    
    for(int i = 1; i <= (int)1e6; i++) {
		int k = i;
		bool ok = true;
		while(k > 0) {
			if (k % 10 == 1 || k % 10 == 0) {
				k /= 10;
				continue;
			}
			else {
				ok = false;
				break;
			}			
		}
		if (ok)
			v.push_back(i);
	}
	for(int i = 0; i < 66; i++) {
		for(int j = 0; j <= 1e6; j++) {
			memo[i][j] = -1;
            NEXT[i][j] = -1;
		}
	}
    int pt = v.size()-1;
    for(int i = 0; i <= 1e6; i++)
        joa(pt,i);
	int ans = joa(pt,n);
    getAns(pt,n);
	cout << ans << endl;
    for(int i = 0; i < numz.size(); i++)
        cout << numz[i] << ' ';
    puts("");
	return 0;
}
