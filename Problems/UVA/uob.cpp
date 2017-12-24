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
    cin >> N;
    VI el;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.pb(x);
    }

    printf("\nPRINTING ARRAY\n");
    for(int i = 0; i < N; i++) { cout << el[i] << " "; }
    printf("\n\nENTER LOWER BOUND TERM >>");
    int temp;
    cin >> temp;
    cout << lower_bound(el.begin(), el.end(), temp)-el.begin() << endl;
    printf("\n\nENTER UPPER BOUND TERM >> ");
    cin >> temp;
    cout << upper_bound(el.begin(), el.end(), temp)-el.begin() << endl;
    printf("\n\nENTER BINARY SEARCH TERM >> ");
    cin >> temp;
    cout << binary_search(el.begin(), el.end(), temp) << endl;
    
    return 0;
}