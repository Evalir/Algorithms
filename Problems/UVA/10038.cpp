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
    int N;
    while(cin >> N) {
        VI el;
        FREQ freq;
        bool njolly = 0;
        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            el.pb(x);
            freq[x] = 0;
        }
        if (el.size() == 1) {
            cout << "Jolly" << endl;
        }
        else if (el.size() > 1){
            for(int i = 0; i < N-1; i++) {
                freq[abs(el[i+1] - el[i])] = 1;
            }
        

        for(auto x : freq) {
            if (x.second == 0 && x.first != N) {
                cout << "Not jolly" << endl;
                njolly = 1;
                break;
            }
            if (njolly) break;
            else continue;
        }

        if (!njolly) cout << "Jolly" << endl;
        }
    }

    return 0;
}