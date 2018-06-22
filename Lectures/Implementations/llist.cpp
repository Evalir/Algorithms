#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
	ll value;
	int next;
}

template<class T>
struct MyList {
	int sz;
	vector<Node> Nodes;

	MyList() {
		sz = 0;
	}

	void insert(Node N) {
	 	Nodes.push_back(N);
	}

	void setNext(int idx, int targetIdx) {
		Nodes[idx].next = targetIdx;		
	}

	
};