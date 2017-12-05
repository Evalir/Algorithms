#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    vector<int> el;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        el.push_back(a);
    }

    int counterh = 0;
    int besth = 0;

    for(int i = 0; i < el.size(); i++) {

        if (el[i] >= el[i+1]) {
            counterh++;
            //cout << el[i] << " CURRENT EL IN NON-INCREASING " << counterh <<endl;
        }
        else {
            if(besth < counterh) besth = counterh;
            counterh = 0;

        }
    }

    int counterl = 0;
    int bestl = 0;

    for(int i = 0; i < el.size(); i++) {

        if (el[i] <= el[i+1]) {
            counterl++;
            //cout << el[i] << " CURRENT EL IN NON-DECREASING " << counterl << endl;
        }
        else {
            if(bestl < counterl) bestl = counterl;
            counterl = 0;

        }
    }

    if (besth > bestl) cout << besth+1 << endl;
    else cout << bestl+1 << endl;
}
