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
#define READALL(vec) for(int i = 0; i < N; i++){string x; cin >> x; (vec).pb(x); cout << "READ" << endl;}
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
    int N, P, counter = 0;
    while(cin >> N >> P && N != 0) {
        counter++;
        for(int i = 0; i < N; i++) {
            string T;
            getline(cin, T);
        }
        map<string, pair<double, int> > proposal;
        int bestp = INF;
        int bestr = 0;
        string bestpp;
        //read all req
        cout << "ENTERING LOOP" << endl;
        for(int i = 0; i < P; i++) {
            
            string S;
            cin >> S;
            pair<double, int> pp;
            cin >> pp.first >> pp.second;
            proposal[S] = pp;
            //consume lines
            for(int i = 0; i < pp.second; i++) {
                string T;
                getline(cin, T);
            }
        }
        
        for(auto x : proposal) {
            if (x.second.second  > bestr) {
                bestpp = x.first;
                bestr = x.second.second;
                bestp = x.second.first;
            }
            else if (x.second.second == bestr && x.second.first < bestp) {
                bestpp = x.first;
                bestr = x.second.second;
                bestp = x.second.first;
            }
        }
        cout << "RFP #" << counter << endl;
        cout << bestpp << endl;
    }

    return 0;
}

/*
6 4
engine
brakes
tires
ashtray
vinyl roof 
trip computer 
Chevrolet 20000.00 3 engine
tires
brakes
Cadillac
70000.00 4
ashtray
vinyl roof
trip computer
engine
Hyundai
10000.00 3
engine
tires
ashtray
Lada
6000.00 1
tires
11 coffee Starbucks 1.50 1 coffee 00

*/