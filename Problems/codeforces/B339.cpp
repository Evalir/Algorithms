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

    for(int i = 1; done <= m; i++) {
        if (el[i] != el[i+1]) {
            for(int j = 1; j <= el[i]; j++ ) {
                counter++;
            }
            done++;
        }
        else if (el[i] == el[i+1]) {
            for( int j = 1; el[i] == el[i+1]; j++) {
                done++;
            }
            done++;
        }
    }

    cout << counter << endl;
    return 0;
}