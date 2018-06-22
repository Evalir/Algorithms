#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

template <class T>
struct LinkedList {
    struct Node {
        T value;
        int next;
        Node(T value) : value(value), next(-1) { }
    };

    // this part is for node managing
    vector<Node> nodes;
    int createNode(T value) {
        int newId = nodes.size();
        nodes.push_back(Node(value));
        return newId;
    }
    // end of node managing part

    int head = -1;
    LinkedList() : head(-1) { }

    void push_back(T value) {
        int newNode = createNode(value);
        if (head == -1) {
            head = newNode;
        }
        else {
            int lastID = head, t = head;
            while(t != -1) {            
                t = nodes[t].next;
                lastID = t;
            }
                nodes[lastID].next = newNode;
        }
    }

    void push_front(T value) {
        int newNode = createNode(value);
        nodes[newNode].next = head;
        head = newNode;
    }

    void pop_front() {
        head = nodes[head].next;
    }

    vector<T> toVector() {
        vector<T> R;
        int t = head;
        while (t != -1) {
            R.push_back(nodes[t].value);
            t = nodes[t].next;
        }
        return R;
    }
};


int main() {

    LinkedList<int> L;
    L.push_back(1);
    L.push_front(2);
    L.push_back(3);
    L.push_front(4);
    for (int v : L.export()) {
        cout << v << " ";
    }
    cout << endl;

}