#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#define INF (int)1e9
#define MAX (int)1e7
#define EPS (int)-1e9
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
using namespace std;

int main() {
    int n;
    cin >> n;
    set<set<char> > roots;
    for(int i = 0; i < n; i++) {
        string S;
        cin >> S;
        set<char> t;
        for(int j = 0; j < S.size(); j++) {
            t.insert(S[j]);
        }
        roots.insert(t);
    }
    int ans = roots.size();
    
    cout << ans << endl;
    return 0;
}