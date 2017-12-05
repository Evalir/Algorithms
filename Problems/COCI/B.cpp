#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <list>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    string S;
    cin >> S;
    int Q;
    cin >> Q;

    for(int i = 0; i < Q; i++) {
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int dA = abs(b-a);
        int dB = abs(y-x);
        dA++;
        dB++;

        string A, B;

        A = S.substr(a-1, dA);
        B = S.substr(x-1, dB);

        //cout << A << endl;
        //cout << B << endl;

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        if (A == B) cout << "DA" << endl;
        else cout << "NE" << endl;

    }

    return 0;
}