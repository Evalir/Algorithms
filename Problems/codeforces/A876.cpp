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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    bool etr, rto, ote, r, o, e;
    int counter = 1;
    int ans = 0;
    //start on rabbit so etr and rto is on.
    etr = 1;
    rto = 1;
    ote = 0;
    r = 1;
    o = 0;
    e = 0;


    while (counter < n) {
        //rto
        if (r == 1 && ans + a <= ans + b) {
            r = 0;
            o = 1;
            ans += a;
            counter++;
        }
        //rte
        else if (r == 1 && ans + a > ans + b) {
            r = 0;
            e = 1;
            ans += b;
            counter++;
        }
        //go to rabbit
        else if (o == 1 && ans + a <= ans + c) {
            o = 0;
            r = 1;
            ans += a;
            counter++;
        }
        //go to eeyore
        else if (o == 1 && ans + a > ans + c) {
            o = 0;
            e = 1;
            ans += c;
            counter++;
        }
        //go to owl
        else if (e == 1 && ans + c <= ans + b) {
            o = 1;
            e = 0;
            ans += c;
            counter++;
        }
        //go to rabbit
        else if (e == 1 && ans + c > ans + b) {
            r = 1;
            e = 0;
            ans += b;
            counter++;
        }
    }
    cout << ans << endl;
}