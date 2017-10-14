#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    vector<int>vi;
    vector<int>::iterator vIterator;
    int x = 20;    
    //Initialize vector with random values from 0-100
    for(int i = 0; i < x; i++) {
	int x = (rand() % 20);
	printf("%d ", *&x);
	vi.push_back(x);
    }
     
    //sort manually with bubble sort
    //Running time of this algorithm ->  O(n^2)
    for(int i = 0; i < x; i++) {
	for (int j = 0; j < x-1; j++) {
	    
	    if (vi[j] > vi[j+1]) {
		int temp = vi[j+1];
		vi[j+1] = vi[j];
		vi[j] = temp;
	    }
	}
    }
    
    printf("Array after sort: ");
    for (vIterator = vi.begin(); vIterator != vi.end(); ++vIterator) {
	if(vIterator != vi.end() - 1) printf("%d ", *vIterator);
	else printf("%d\n", *vIterator);
    }
}