#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> VI;

int main() {
    int N, M;
    cin >> N >> M;
    VI el;

    int counter = 0;

    for(int i = 0; i < M; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    counter = el[0] - 1;
    for(int i = 1; i < M; i++) {
        // if a <= b then b -a sec
        if (el[i-1] <= el[i]) {
            counter += el[i] - el[i-1];
        }
        else if (el[i-1] > el[i]) {
            counter += abs(N - el[i-1] + el[i]);
        }
    }
    cout << counter << endl;
    return 0;
}