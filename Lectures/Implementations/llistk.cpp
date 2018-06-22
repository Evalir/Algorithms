#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

template <class T>
struct Node {
    T value;
    int next;
    Node(T value) : value(value), next(-1) { }
};

template <class T>
struct NodeManager {
    vector<Node<T>> nodes;
    int createNode(T value) {
        int newId = nodes.size();
        nodes.push_back(Node<T>(value));
        return newId;
    }
    Node<T>& operator[](int idx) {
        return nodes[idx];
    }
};

template <class T>
struct LinkedList {

    int head = -1;
    NodeManager<T> &nm;
    LinkedList(NodeManager<T> &nm) : head(-1), nm(nm) { }

    void push_back(T value) {
        int newNode = nm.createNode(value);
        if (head == -1) {
            head = newNode;
        }
        else {
            int lastID = head, t = head;
            while(t != -1) {   
                lastID = t;         
                t = nm[t].next;
            }
                nm[lastID].next = newNode;
        }
    }

    void push_front(T value) {
        int newNode = nm.createNode(value);
        nm[newNode].next = head;
        head = newNode;
    }

    void pop_front() {
        head = nm[head].next;
    }

    vector<T> toVector() {
        vector<T> R;
        int t = head;
        while (t != -1) {
            R.push_back(nm[t].value);
            t = nm[t].next;
        }
        return R;
    }
};


int main() {
    NodeManager<int> nm;
    LinkedList<int> L(nm);

    L.push_back(1);
    L.push_front(2);
    L.push_back(3);
    L.push_front(4);
    for (int v : L.toVector()) {
        cout << v << " ";
    }
    cout << endl;

}