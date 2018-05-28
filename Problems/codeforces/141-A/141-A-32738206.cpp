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
    string romo;
    string droga;
    cin >> romo >> droga;
    map<char, int> crazy;
    string crazyromo;
    cin >> crazyromo;
    map<char, int> borracho;

    for(int i = 0; i < romo.length(); i++)  {
        crazy[romo[i]]++;
        //cout << "READ " << romo[i] << endl;
    }
    
    for(int i = 0; i < droga.length(); i++) 
        crazy[droga[i]]++;
    
    for(int i = 0; i < crazyromo.length(); i++) 
        borracho[crazyromo[i]]++;
    
    //first check if everything's in there and count's bigger than one
    for(int i = 0; i < crazyromo.length(); i++) {
        if (borracho.find(crazyromo[i]) != borracho.end() && borracho[crazyromo[i]] == crazy[crazyromo[i]]) {
            continue;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    for(auto x : crazy) {
        if (x.second == borracho[x.first]) continue;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}