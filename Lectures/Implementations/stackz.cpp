#include <bits/stdc++.h>
using namespace std;
template <class T>
struct MyStack {

    int maxSize, sz;
    T *arr;
    MyStack() {
        maxSize = 1;
        sz = 0;
        arr = new T[maxSize];
    }

    void push(T val) {
        if (sz == maxSize) {
            enlarge();
        }
        arr[sz++] = val;
    }

    T top() {
        return arr[sz-1];
    }

    void pop() {
        --sz;
    }
    bool isEmpty() {
    	return sz == 0 ? 1 : 0;
    }

    int size() {
        return sz;
    }

    void enlarge() {
        T *temp = new T[maxSize*2];
        for(int i = 0; i < maxSize; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        maxSize *= 2;
    }
};          

int main() {
 	MyStack<int> ST;
 	ST.push(2);
 	ST.push(3);
 	cout << ST.top() << endl;
 	ST.pop();
 	cout << ST.top() << endl;
 	cout << ST.isEmpty() << endl;
 	ST.pop();      
 	cout << ST.isEmpty() << endl;
 	return 0;

}