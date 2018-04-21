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
    int T;
    cin >> T;
    while(T--) {

        int n, k;
        cin >> n >> k;
        VI garden(n, 0);
        VI waterTap(n, 0);
        for(int i = 0; i < k; i++) {
            int x; cin >> x;
            waterTap[x-1] = 1; //x-1 because zero indexing
        }

        //simulate flooding
        bool first = 1;
        bool pr = 0;
        int counter = 0;
        for(int j = 0; j < garden.size(); j++) {
            counter++;
            for(int i = 0; i < garden.size(); i++) {
                if(first) {
                    if (waterTap[i] == 1) { //floods initial watertap place
                        garden[i] = 1;
                        cerr << "F: FLOODED GARDEN PART :" << i << endl;
                    }
                }   
                else {
                    if (garden[i] == 1 && garden[i+1] == 0 && garden[i-1] == 0 && i != 0) {
                        garden[i+1] = 1;
                        garden[i-1] = 1;
                        cerr << "A FLOODED GARDEN PART :" << i-1 << " " << i+1 << " ON "<< i << "IT " << j << endl;
                    }
                    else if (garden[i] == 1 && garden[i+1] == 0 && i == 0) {
                        garden[i+1] = 1;
                        cerr << "B FLOODED GARDEN PART :" << i+1 << " ON "<< i << "IT " << j << endl;
                    }
                    else if (garden[i] == 1 && garden[i-1] == 0 && i == garden.size()-1) {
                        garden[i-1] = 1;
                        cerr << "C FLOODED GARDEN PART :" << i-1 << " ON "<< i << "IT " << j << endl;
                    }
                    else if (garden[i] == 1 && garden[i+1] == 0) {
                        garden[i+1] = 1;
                        cerr << "FORWARD FLOODED GARDEN PART :" << i+1 << " ON "<< i << "IT " << j << endl;
                    }
                    else if (garden[i] == 1 && garden[i-1] == 0 && i != 0) {
                        garden[i-1] = 1;
                        cerr << "BACKWARD FLOODED GARDEN PART :" << i-1 << " ON "<< i << "IT " << j << endl;
                    }
                }

            }
            first = false;
        }
        cout << counter << endl;
    }

    return 0;
}