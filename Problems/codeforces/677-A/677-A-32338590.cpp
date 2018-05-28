#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, H;
    cin >> N >> H;
    int bent = 0, nbent = 0;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x > H) bent += 2;
        else nbent += 1;
    }

    cout << bent + nbent << endl;
}