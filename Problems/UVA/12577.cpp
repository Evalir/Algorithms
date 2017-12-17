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
    string S;
    int counter = 0;
    while(cin >> S && S != "*") {
        counter++;
        if (S == "Hajj") cout << "Case " << counter << ": " << "Hajj-e-Akbar" << endl;
        else cout << "Case " << counter << ": " << "Hajj-e-Asghar" << endl;
    }

    return 0;
}