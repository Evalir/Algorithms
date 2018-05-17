#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> V;
    while (n > 0) {
        int temp = n % 10;
        V.push_back(temp);
        n /= 10;
    }
    if (V[V.size()-1] % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
    return 0;
    
}
