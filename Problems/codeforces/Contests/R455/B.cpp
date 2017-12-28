#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int M = (N*(N+1))/2;
    cout << (M+N -(N/2))/2 << endl;
    return 0;
}