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
    int N = 34; //100010
    N = N << 1; // N * 2 = 68
    cout << N << " 34 LEFT SHIFT 1" << endl;

    N = N >> 1; // N / 2 = 34 again
    N = N >> 1; // N / 2 = now it's 17.
    cout << N << " RIGHT SHIFT 2" << endl;

    N = N << 1;
    cout << N << endl;
    //USE OR OPERATOR | TO TURN A BIT FROM SET
    //THIS OPERATION WILL YIELD THE NUMBER 42, CONVERTING IT TO 101010
    N |= (1 << 3); //shift bit 1 three times to the left, putting it into 3rd position zero base
    cout << N << " WITH OR OPERATION, original was 34" << endl;

    //Check if a bit is on use & AND OPERATOR
    if (N &= (1 << 3)) cout << "third bit is on" << endl;
    else cout << "third bit off" << endl;
    if (N &= (1 << 2)) cout << "third bit is on" << endl;
    else cout << "second bit off" << endl;

    //Turn off a bit from a set use AND operation with bitwise NOT
    N &= ~(1 << 1);
    cout << N << endl;

}