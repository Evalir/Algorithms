#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> S;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
	int X;
	cin >> X;
	S.insert(X);
    }
    cout << endl << "Erase an element" << endl;
    int Y;
    cin >> Y;
    S.erase(Y);
    
    cout << "Iterate over elements with c++11 style and print" << endl;
    for(int x : S) //C++11 style loop
	cout << x << " ";

    cout << endl;
}