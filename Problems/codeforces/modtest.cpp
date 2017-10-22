#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    if (n % k == 0) cout << "div" << endl;
    else if (n % k == 1) cout << "nodiv" << endl;
    

}