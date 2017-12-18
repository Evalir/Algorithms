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
#define pb push_back
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    int N;
    cin >> N;
    vector<long long> el;

    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        el.pb(x);
    }

    for(int i = 0; i < N; i++) {
        long long minD = INF*2+(105), maxD = -1;
        //calculate min
        if (i == 0)
            minD = min(minD, abs(el[i]-el[i+1]));
        else
            minD = min(abs(el[i]-el[i+1]), abs(el[i]-el[i-1]));

        if(i == N-1)
            maxD = max(maxD, abs(el[i]-el[0]));
        else {
            if (i != N-1) 
                maxD = max(abs(el[i]-el[N-1]), abs(el[i]-el[0]));
            else
                maxD = max(abs(el[i]-el[i-1]), abs(el[i]-el[0])); 
             }
       

        cout << minD << " " << maxD << endl;
    }

    //cout << -5 -(-2) << endl;
    return 0;

}