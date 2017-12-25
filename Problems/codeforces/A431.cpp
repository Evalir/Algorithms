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
    VI cal;
    int counter = 0;
    for(int i = 0; i < 4; i++) {int x; cin >> x; cal.pb(x);}
    string S;
    cin >> S;
    for(int i = 0; i < S.length(); i++) {
        if (S[i] == '1') counter += cal[0];
        else if (S[i] == '2') counter += cal[1];
        else if (S[i] == '3') counter += cal[2];
        else if (S[i] == '4') counter += cal[3];
    }

    cout << counter << endl;
    return 0;
}