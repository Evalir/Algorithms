#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int acc = 0;
    int pmin = 0;
    vector<double> people;

    for (int i = 0; i < N; i++) {
	      int x;
	      cin >> x;
	      people.push_back(x);
    }
    sort(people.begin(), people.end());

    int win = (people.size() / 2) + 1;
    // cout << win << endl;
    // cout << win << " win "<< endl;
    for (int i = 0; i < win; i++) {
      pmin += (people[i] / 2) + 1;
      // cout << pmin << endl;
    }

    cout << pmin << endl;

}
