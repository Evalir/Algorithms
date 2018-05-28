#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int N, K;
    cin >> N >> K;
    VI ins, ind, idx;
    int cutime = K;
    int max = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ins.push_back(x);
        ind.push_back(x);
    }
    
    sort(all(ind));

    for(int i = 0; i < N; i++) {
        if (cutime - ind[i] >= 0) {
            max++;
            cutime -= ind[i];
            //look for index;
            for(int j = 0; j < N; j++) {
                if (ins[j] == ind[i]) {
                    idx.pb(j+1);
                    ins[j] = 0;
                    break;
                }
            }
        }
        else continue;
    }

    if (max != 0) {
        cout << max << endl;
        for(int i = 0; i < idx.size()-1; i++) {
            cout << idx[i] << " ";
        }
        cout << idx[idx.size()-1] << endl;
    }
    else cout << 0 << endl;
    return 0;
}