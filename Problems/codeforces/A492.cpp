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
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
int counter = 0;
int recurseSum(int idx) {
    counter++;
    if (idx == 0) return 1;

    return idx - recurseSum(idx-1);
}
 
int main(){
    int N;
    cin >> N;
    VI cubes;
    int sum = 0;
    int track = 0;

    for(int i = 0; sum < N; i++) {
        
        sum += i;
        track++;
        int check = 0;
        cubes.push_back(i);
        for(int j = 0; j < cubes.size(); j++) {
            check += cubes[j];
            cout << check << " THIS IS"<<endl;

            if(check > N) break;
        }
        
    }
        //cout << x << endl;
    //cout  << counter << endl;
    cout << sum << endl;
    cout << track << endl;
    return 0;
}