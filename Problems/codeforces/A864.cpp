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
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

int main(){
    int N;
    cin >> N;
    FREQ cards;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        cards[x]++;
    }
    int c1 = 0, c2 = 0;
    bool first = true;
    bool samecount = false;
    for(auto x : cards) {
      //  cout << x.second << endl;
        if (first) {
            c1 = x.second;
            first = false;
            }
        else {
            int temp = x.second;
            if (temp != c1) {
                samecount = false;
      //          cout << "boom" << endl;
                break;
            }
            else {
                samecount = true;
            }
        }
    }
    //cout << samecount << endl;

    if (cards.size() > 2) {
        cout << "NO" << endl;
    }
    else if (cards.size() == 2 && samecount == true) {
        cout << "YES" << endl;
        for(auto x : cards) cout << x.first << " ";
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}