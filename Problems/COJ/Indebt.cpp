#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int N = 0;
    while(1==scanf("%d", &N) && N != -1) {
		int sum = 0;
		int acc = 0;
		for (int i = 0; i < N; i++) {
	 	   int x;
		    cin >> x;
		    sum += x;
		    if (sum % 100 == 0) acc++;
		}
	
		cout << acc << endl;
    
    }
    
    return 0;
}