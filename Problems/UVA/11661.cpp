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
    int c = 0;
    while(cin >> N && N != 0) {
        c++;
        string road;
        cin >> road;
        int best = INF;
        int counter = 0;
        int ris = -1;
        int bis = -1;
        for(int i = 0; i < road.length(); i++) {
            if (road[i] == 'Z') {
                best = 0;
                break;
            }
            else if (road[i] == 'R') {
                ris = i;
            }
            else if (road[i] == 'D') {
                bis = i;
            }
            else continue;

            if (ris != -1 && bis != -1) {
                if (ris - bis > 0 && best > ris - bis) {
                    best = ris - bis;
                }
                if (bis - ris > 0 && best > bis - ris) {
                    best = bis - ris;
                }
            }
        }
        cout << best << endl;
    }
    return 0;
}