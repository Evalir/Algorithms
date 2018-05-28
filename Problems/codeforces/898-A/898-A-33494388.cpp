#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if (N % 10 >= 5) {
        cout << N + (10 - N % 10);
    }
    else {
        cout << N - (N % 10);
    }
    return 0;
}