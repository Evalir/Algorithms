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
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int K;
    cin >> K;
    VI el;
    for(int i = 0; i < 12; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    int ans = INF;
    sort(el.begin(), el.end());
    //check every possible index
    for(int i = 0; i <= 12; i++) {
        int growcount = 0;
        int months = 0;
        for (int j = i; j <= 12; j++) {
            if (growcount >= K) {
                ans = min(ans, months);
                //cout << "REACHED COUNT ON " << i << " " << j << " WITH GC " << growcount << " ANS IS: " << months <<  endl;
            }
                months++;
                growcount += el[j];
                //cout << i << " ITERATING " << j << " COUNT: " << months << endl;
                
        }
    }
    cout << ans << endl;
}