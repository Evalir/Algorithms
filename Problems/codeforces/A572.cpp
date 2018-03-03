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
    long n1, n2, k, m;
    cin >> n1 >> n2 >> k >> m;
    vector<long> A;
    vector<long> B;
    long lastA;
    set<long> kAB;

    for(int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        A.pb(x);
        
    }
    for(int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        B.pb(x);
    }
    //get k elements from A.
    for(int i = 0; i < k; i++) {
        kAB.insert(A[i]);
        lastA = A[i];
    }
    cout << lastA << endl;

    sort(all(B), greater<int>());
    long lastInsert;
    for(int i = 0; i < m; i++) {
        
        if (kAB.find(B[i]) != kAB.end() && B[i] != lastInsert && lastA >= B[i]) {
            cout << "NO" << endl;
            return 0;
        }
        else {
            kAB.insert(B[i]);
            lastInsert = B[i];
            }
    }

    cout << "YES" << endl;
    return 0;
    
}