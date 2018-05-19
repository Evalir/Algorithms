#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> klk = {0,1,2,3,4,5,6};
    
    for(int i = 0; i < klk.size(); i++) {
        for(int j = 0; j < klk.size(); j++) {
            for(int k = i; k <= j; k++) {
                cout << klk[k] << ' ';
            }
            cout << endl;
        }
    }

    
    return 0;
}
