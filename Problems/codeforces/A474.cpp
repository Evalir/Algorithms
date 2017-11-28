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
    char P;
    cin >> P;
    string message;
    cin >> message;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (P == 'R') {
        for(int i = 0; i < message.length(); i++) {
            //search for key and print
            for (int j = 0; j < keyboard.length(); j++) {
                //cout << "TRYING TO MATCH " << message[i] << " TO " << keyboard[j] << endl;
                if (message[i] == keyboard[j]) {
                    cout << keyboard[j-1];
                    break;
                }
            }
        }
    }
    else {
        for(int i = 0; i < message.length(); i++) {
            for (int j = 0; j < keyboard.length(); j++) {
                if (message[i] == keyboard[j]) {
                    cout << keyboard[j+1];
                }
            }
        }
    }

    return 0;
}