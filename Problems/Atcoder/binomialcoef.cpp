#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> el(n,0);
    for(int i = 0; i < n; i++)
        cin >> el[i];
    sort(el.begin(), el.end());
    long nC = -1;
    nC = el[n-1];
    long k = -1;
    long cK = nC/2;
    for(int i = 0; i < n; i++)
        if (abs(el[i]-cK) <= abs(k-cK) && el[i] != nC)
            k = el[i];
            
    cout << nC << " " << k << endl;
}
