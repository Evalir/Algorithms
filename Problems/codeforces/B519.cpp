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
    cin >> N;
    set<long> elements;
    map<long, int> freq1;
    map<long, int> freq2;
    map<long, int> freq3;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        elements.insert(x);
        freq1[x]++;
    }

    for (int i = 0; i < N - 1; i++) {
        int x;
        cin >> x;
        elements.insert(x);
        freq2[x]++;
    }
    
    for(auto x : freq1) {
        auto search = freq2.find(x.first);

        if (search == freq2.end() || freq2[x.first] != x.second) {
            cout << x.first << endl;
            elements.erase(x.first);
            if (search == freq2.end()) freq2.erase(x.first);
        }
    }

    for (int i = 0; i < N - 2; i++) {
        int x;
        cin >> x;
        elements.insert(x);
        freq3[x]++;
    }

    for(auto x : freq2) {
        auto search = freq3.find(x.first);

        if (search == freq3.end() || freq3[x.first] != x.second) {
            cout << x.first << endl;
            elements.erase(x.first);
            if (search == freq3.end()) freq3.erase(x.first);
        }
    }

    return 0;
}