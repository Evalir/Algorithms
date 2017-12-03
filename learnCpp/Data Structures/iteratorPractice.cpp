#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x = 0;
    vector<int> vi;
    vector<int>::iterator vIterator;
    for (int i = 0; i < 10; i++) {
	vi.push_back(i);
    }
    for (vIterator = vi.begin(); vIterator != vi.end(); vIterator++) {
	printf("thing is : %d\n", *vIterator); //you can derefence an interator just like a pointer
    }

}
