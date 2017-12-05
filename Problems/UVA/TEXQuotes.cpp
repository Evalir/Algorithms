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
#include <sstream>
#include <cctype>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    string s;
    bool fb = true;
    while(getline(cin, s)) {
        
        for(int i = 0; i < s.length(); i++) {
                if (s[i] == '\"' && fb) {
                    fb = false;
                    cout << "``";
                }
                else if (s[i] == '\"' && !fb) {
                    fb = true;
                    cout << "\'\'";
                }
                else {
                    cout << s[i];
                }
        }
        cout << endl;
    }


    return 0;
}