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
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> people(N+11, 0);
    int minV = 1000000;
    char cpeople[N];
    bool cmet = 0;
    int tempA = A, tempB = B;
    int counter = 0;

    if (A < N) {
        //a es mas chiquito, itera hasta a y luego pon b
        while (!cmet) {
                for(int i = 0; i < A; i++) {
                    if(tempA > 0)people[i]++;
                    if(tempA > 0)tempA--;
                }
                for(int i = A; i < N; i++) {
                    if(tempB > 0)people[i]++;
                    if(tempB > 0)tempB--;
                }
                if (tempA == 0 && tempB == 0) {
                    cmet = 1;
                }   
        }    
        for(int i = 0; i < N; i++) { minV = min(minV, people[i]);}
        cout << minV << endl;
    }
    else if (B < N) {
        while (!cmet) {
                for(int i = B; i < N; i++) {
                    if(tempA > 0)people[i]++;
                    if(tempA > 0)tempA--;
                }
                for(int i = 0; i < B; i++) {
                    if(tempB > 0)people[i]++;
                    if(tempB > 0)tempB--;
                }
                if (tempA == 0 && tempB == 0) {
                    cmet = 1;
                }   
        }
        for(int i = 0; i < N; i++) { minV = min(minV, people[i]);}
        cout << minV << endl;    
    }
    else if (A >= (N / 2) && B >= (N / 2)) {
        cout << "THIS CASE" << endl;
        while (!cmet) {
                for(int i = 0; i < (N/2); i++) {
                    if(tempA > 0)people[i]++;
                    if(tempA > 0)tempA--;
                }
                for(int i = (N/2); i < N; i++) {
                    if(tempB > 0)people[i]++;
                    if(tempB > 0)tempB--;
                }
                if (tempA == 0 && tempB == 0) {
                    cmet = 1;
                }   
        }
        for(int i = 0; i < N; i++) { minV = min(minV, people[i]);}
        cout << minV << endl;    
    }
    // for(int i = 0; i < N; i++) {
    //     cout << people[i] << endl;
    // }
    
    return 0;
}