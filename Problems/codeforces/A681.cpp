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
    map<string, ii> users;
    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;
        ii rating;
        cin >> rating.first >> rating.second;
        users[S] = rating;
    }

    for(auto x : users) {
        if (x.second.second > x.second.first && x.second.first >= 2400) {
            cout << "YES" << endl;
            return 0;
        }
        else continue;
    }

    cout << "NO" << endl;
    return 0;
}