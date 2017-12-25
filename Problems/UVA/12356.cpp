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
typedef vector<int>::iterator VIT;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int S, B;
    while(cin >> S >> B && S != 0) {
        VI soldiers;
        soldiers.pb(0);
        for(int i = 1; i <= S; i++) {soldiers.pb(i);} //generate soldiers
        for(int i = 0; i <= S; i++) { cout << soldiers[i] << " ";}
        cout << endl;
        //lISTEN TO QUERIES
        while(B--) {
            int L, R;
            cin >> L >> R;
            for(int i = L; i <= R; i++) {
                soldiers[i] = 0;
            }
            sort(all(soldiers));
            //GET SOLDIER LEFT AND RIGHT
            if (lower_bound(soldiers.begin(), soldiers.end(), L)-soldiers.begin() == 0) {
                cout << "*";
            }
            else {
                VIT it = lower_bound(soldiers.begin(), soldiers.end(), L);
                cout << "POS BEFORE ROLLING BACK IS " << lower_bound(soldiers.begin(), soldiers.end(), L)-soldiers.begin() << endl;
                it--;
                if (it != soldiers.begin() || *it != 0) cout << *it;
                else cout << "*";
            }
            cout << " ";
            if (lower_bound(soldiers.begin(), soldiers.end(), R)-soldiers.begin() == 0) {
                cout << "*";
            }
            else {
                VIT it2 = upper_bound(soldiers.begin(), soldiers.end(), R);
                if (it2 != soldiers.end()) cout << *it2;
                else cout << "*";
            }
        }
        cout << endl;
        cout << "-" << endl;
    }
}

//NEW IDEA
/*
Instead of vector, use set, that way we avoid duplicates, and the range killing can be converted into a simple delete operation, so we only have the numbers we need at any time. It will also help the binary search because we can then perform a lower_bound scan on L-1 and R+1, and then check if they are out of range or equal to 0 before printing.
*/