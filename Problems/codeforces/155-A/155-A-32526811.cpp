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
    VI el;
    int ap = 0;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }

    for(int i = 0; i < N; i++) {
        if (i == 0 && N != 1) {
            if (el[i+1] > el[i]) ap++;
            else if (el[i+1] < el[i]) ap++;
        }
        else if (i > 1){
            int counter = 0;
            for(int j = i-1; j > -1; j--) {
                //cout << " RAN BIG AT I: " << i << " WITH EL " << el[i] <<" " << el[j] << endl;
                if (el[i] > el[j]) {
                    counter++;
                //cout << "EL " << el[i] << " IS BIGGER THAN " << el[j] << endl;
                }
                else break;
            }
            if (counter == i) {
                ap++;
                //cout << "COUNTED HIGH I: " << i << " COUNTER: " << counter <<endl;
            }
            counter = 0;
            for(int j = i-1; j > -1; j--) {
                //cout << " RAN LOW AT I: " << i << " WITH EL " << el[i] <<" " << el[j] <<endl;
                if(el[i] < el[j]) {
                    counter++;
                  //  cout << "EL " << el[i] << " IS SMOL THAN " << el[j] << endl;
                }
                else break;
            if (counter == i) {
                ap++;
                //cout << "COUNTED low I: " << i << " COUNTER: " << counter <<endl;
            }
            }
        }
    }

    cout << ap << endl;

}