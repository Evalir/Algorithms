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
 
 
int main(){
    int N;
    int best = 0;
    int counter = 0;
    cin >> N;
    VI el;
    
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }

    for(int i = 0; i <= N; i++) {
        //simulate moving interval
        for (int j = i; j <= N; j++) {
            VI mel = el;
            for (int k = i; k < j; k++) {
                

                if (mel[k] == 0) mel[k] = 1;
                else mel[k] = 0;

                //count ones
                for(int j = 0; j < N; j++) {
                    if (mel[j] == 1) counter++;
                }

                if (best < counter) {
                    best = counter;
                }
        
                counter = 0;
            }
        }
    }

    cout << best << endl;
    return 0;
}