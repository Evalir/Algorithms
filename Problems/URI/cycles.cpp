#include <iostream>
using namespace std;

int main() {
    int n;
    int t = 0;
    while(cin >> n) {
        if (n == -1)
            break;
        t++;
        cout << "Experiment " << t << ": " << n/2 << " full cycle(s)" << endl;
    }
    return 0;
    
}
