#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> VI;

int main() {
    int n, m;
    cin >> n >> m;
    VI el;

    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }

    int done = 0;
    int counter = 0;

    for(int i = 0; i < m; i++) {
        if (el[i] == el[i+1]) {

        }
        else {
            for(int j = 0; j <= el[i]; j++) {
                cout << counter << " AT el[i] " << el[i] << endl;
                counter++;
            }
            done++;
        }
    }
    

    cout << counter << endl;
    return 0;
}