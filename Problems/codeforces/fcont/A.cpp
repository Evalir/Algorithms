#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long long k = 0;
    vector<long long> rs(1000), ms(1000);
    for(int i = 0; i < 1000; i++) {
        rs[i] = b + (a*k);
        //cerr << rs[i] << endl;
        k++;
    }
    k = 0;
    for(long long i = 0; i < 1000; i++) {
        ms[i] = d + (c*k);
        //cerr << ms[i] << endl;
        k++; 
    }
    
    for(long long i = 0; i < 1000; i++) {
        for(long long j = 0; j < 1000; j++) {
            if (rs[i] == ms[j])
            {
                //cerr << "match on " << i << ' ' << j << endl;
                cout << rs[i] << endl;
                return 0;
            }
        }
    }
    
    cout << -1 << endl;
    return 0;
    
}
