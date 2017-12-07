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
    string S;
    map<string, string> greetings;
    greetings["HELLO"] = "ENGLISH";
    greetings["HALLO"] = "GERMAN";
    greetings["HOLA"] = "SPANISH";
    greetings["BONJOUR"] = "FRENCH";
    greetings["CIAO"] = "ITALIAN";
    greetings["ZDRAVSTVUJTE"] = "RUSSIAN";
    int counter = 0;

    while(cin >> S && S != "#") {
        counter++;
        if (greetings.find(S) != greetings.end()) {
            cout << "Case " << counter << ": " << greetings[S] << endl;
        }
        else {
            cout << "Case " << counter << ": " << "UNKNOWN" << endl;
        }
    }

    return 0;
}