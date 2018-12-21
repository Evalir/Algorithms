#include <iostream>
#include <cassert>
#include <limits>
#include <algorithm>
#include <cmath> 
using namespace std;

template <class T>
struct MyQueue {

    int maxSize, head,tail;
    T *arr;
    MyQueue() {
        maxSize = 1;
        head = 0, tail = 0;
        arr = new T[maxSize];
    }

    void push(T val) {
        if (tail == maxSize) {
            enlarge();
        }
        arr[tail++] = val;
    }

    T front() {
        return arr[head];
    }
    
    T back() {
        return arr[tail-1];
    }

    void pop() {
        ++head;
    }

    bool isEmpty() {
        return tail-head == 0 ? 1 : 0;
    }

    int size() {
        return tail-head;
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
    MyQueue<int> Q;
    cout << Q.isEmpty() << endl;
    Q.push(3);
    Q.push(5);
    cout << Q.front() << endl;
    cout << Q.back() << endl;
    Q.pop();
    cout << Q.front() << endl;
    cout << Q.back() << endl;
    cout << Q.size() << endl;
    Q.pop();
    cout << Q.isEmpty() << endl;
    cout << Q.back() << endl;
    cout << Q.size() << endl;
    Q.push(7);
    Q.push(10);
    cout << Q.front() << endl;
    cout << Q.back() << endl;

    return 0;

}
