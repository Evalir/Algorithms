#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    stack<long long> harry;
    stack<long long> monk;

    //get coins in harry's stack
    for (int i = 0; i < N; i++) {
        long long coin;
        cin >> coin;
        harry.push(coin);
    }
    //get number of instructions and x
    long long q, x;
    cin >> q >> x;
    //variable for getting the sum of coins and query
    long long sumcoin = 0;
    string query;
    for (int i = 0; i < q; i++) {
      if (sumcoin == x) break;
      cin >> query;

      if (query == "Harry") {
        long long coin = harry.top(); //get val of coin
        harry.pop(); //harry pops the coin to monk
        monk.push(coin); // monk pushes coin
        sumcoin += coin; //the sum of all coins now equals that
      }

      if (query == "Remove") {
        long long coin = monk.top();
        monk.pop();
        sumcoin -= coin;
      }
    }

    if (sumcoin == x) cout << monk.size() << endl;
    else cout << - 1 << endl;

}
