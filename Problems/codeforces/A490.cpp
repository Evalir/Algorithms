#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
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
    VI el;
    VII teams;
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        el.push_back(t);
    }

    for (int i = 0; i < N; i++) {
        VI team; //will hold the fkin position
        bool ct1 = true;
        bool ct2 = true;
        bool ct3 = true;
        for (int j = 0; j < N; j++) {
            if (el[j] == 1 && ct1 == true) {
                team.push_back(j+1);
                el[j] = 0;
                ct1 = false;
            }
            if (el[j] == 2 && ct2 == true) {
                team.push_back(j+1);
                el[j] = 0;
                ct2 = false;
            }
            if (el[j] == 3 && ct3 == true) {
                team.push_back(j+1);
                el[j] = 0;
                ct3 = false;
            }

            //check if vector is big enough to push back
            if (team.size() == 3) {
                teams.push_back(team);
                break;
            }
        }
    }

    cout << teams.size() << endl;
    for(auto team : teams) {
        for (int y : team) {
            cout << y << " ";
        } 
        cout << endl;
    }

}

/*
7
1 3 1 3 2 1 2
*/