#include <bits/stdc++.h>
using namespace std;
template <class T>
struct MyVec {

    int maxSize, sz;
    int ops;
    T *arr;
    MyVec() {
        maxSize = 1;
        sz = 0;
        arr = new T[maxSize];
    }

    void push_back(T val) {
        if (sz == maxSize) {
            enlarge();
        }
        arr[sz++] = val;
    }

    T operator[](const int x) {
        return arr[x];
    }

    void pop_back() {
        --sz;
    }

    int size() {
        return sz;
    }

    void enlarge() {
        T *temp = new T[maxSize*2];
        for(int i = 0; i < maxSize; i++) {
            ops++; // count number of assignments
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        maxSize *= 2;
        cerr << ops << endl;
    }
};          

int main() {
 	MyVec<int> V;
 	for(int i = 0; i < 10000000; i++) {
 	 	V.push_back(i);
 	}
 	cout << V[1234] << endl;       
 	return 0;

}