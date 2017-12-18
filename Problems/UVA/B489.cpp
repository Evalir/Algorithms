#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int N;
    cin >> N;
    VI boys;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        boys.push_back(x);
    }
    int M;
    cin >> M;
    VI girls;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        girls.push_back(x);
    }
    
    int counter = 0;
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    if (boys.size() > girls.size()) {
        for(int i = 0; i < boys.size(); i++) {
            for(int j = 0; j < girls.size(); j++) {
                if ((boys[i] == girls[j] || boys[i] == girls[j]-1 || boys[i] == girls[j]+1) && boys[i] != 0 && girls[j] != 0) {
                    counter++;
                    boys[i] = 0;
                    girls[j] = 0;
                    break;
                }
            }
        }
    }
    else {
        for(int i = 0; i < girls.size(); i++) {
            for(int j = 0; j < boys.size(); j++) {
                if ((girls[i] == boys[j] || girls[i] == boys[j]-1 || girls[i] == boys[j]+1) && girls[i] != 0 && boys[j] != 0) {
                    counter++;
                    girls[i] = 0;
                    boys[j] = 0;
                    break;
                }
            }
        }
    }

    cout << counter << endl;

    return 0;
}