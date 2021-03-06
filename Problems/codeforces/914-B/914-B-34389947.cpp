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
    VI cards;
    string Conan = "Conan";
    string Agasa = "Agasa";
    FREQ cardnums;
    for(int i = 0 ; i < N; i++) {
        int x;
        cin >> x;
        cardnums[x]++;
    }
    bool impar = false;

    for(auto x : cardnums) {
        if (x.second % 2 != 0 && impar == false) {
            impar = true;
        }
        else if (x.second % 2 != 0 && impar == true) {
            cout << Conan << endl;
            return 0;
        }
        else continue;
    }

    if (impar == false) cout << Agasa << endl;
    else cout << "Conan" << endl;
    return 0;
}