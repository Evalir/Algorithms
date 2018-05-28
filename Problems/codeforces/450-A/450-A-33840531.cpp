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
    int N, M;
    cin >> N >> M;
    queue<ii> daboys;
    ii finalboy;
    for(int i = 0; i < N; i++) {
        ii boy;
        int x;
        cin >> x;
        boy.first = x;
        boy.second = i+1;
        daboys.push(boy);
    }

    for(int i = 0; !daboys.empty(); i++) {
        ii boy = daboys.front();
        daboys.pop();
        //push to back of the queue
        if (boy.first - M > 0) {
            boy.first = boy.first - M;
            //cout << boy.second << endl;
            daboys.push(boy);
        }
        //go home
        else {
            finalboy = boy;
        }
    }

    cout << finalboy.second << endl;
}