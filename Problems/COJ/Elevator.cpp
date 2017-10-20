#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    int seconds = 0;
    int last = 1;

    for(int i = 0; i < T; i++) {
      int x;
      cin >> x;
      seconds += abs(x - last);
      last = x;
    }

    seconds += abs(1-last);

    cout << seconds << endl;
}

/*
1+1+(5-2)+(5-3)+1

*/
