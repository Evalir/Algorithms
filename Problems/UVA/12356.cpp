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
    int S, B;
    while(cin >> S >> B && S != 0) {
        VI soldiers;
        soldiers.pb(0);
        for(int i = 1; i <= S; i++) {soldiers.pb(i);} //generate soldiers
        //lISTEN TO QUERIES
        while(B--) {
            int L, R;
            cin >> L >> R;
            for(int i = L; i <= R; i++) {
                soldiers[i] = 0;
            }
            //GET SOLDIER LEFT AND RIGHT
            if (lower_bound(soldiers.begin(), soldiers.end(), L)-soldiers.begin() == 0) {
                cout << "*";
            }
            else {
                VI::iterator it = lower_bound(soldiers.begin(), soldiers.end(), L);
                if (it != soldiers.begin()) cout << *it;
                else cout << "*";
            }
            cout << " ";
            if (lower_bound(soldiers.begin(), soldiers.end(), R)-soldiers.begin() == 0) {
                cout << "*";
            }
            else {
                VI::iterator it2 = upper_bound(soldiers.begin(), soldiers.end(), R);
                if (it2 != soldiers.end()) cout << *it2;
                else cout << "*";
            }
        }
        cout << endl;
        cout << "-" << endl;
    }
}