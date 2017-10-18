#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        long n, id;
        stack<long> players;

        cin >> n >> id;
        players.push(id);
        //cout << players.top() << " IS START" << endl;

        for (int i = 0; i < n; i++){

            long cache;
            char q;
            cin >> q;
            //if it's a pass
            if (q == 'P') {
                long x;
                cin >> x;
                if(!players.empty()) cache = players.top();
                players.push(x);
          //      cout << players.top() << " IS CURRENT TOP P WITH CACHE: " << cache << endl;
            }
            else if (q == 'B') {
                long temp = players.top();
                players.pop();
                players.push(cache);
                cache = temp;
            //    cout << players.top() << " IS CURRENT TOP B WITH CACHE:  " << cache << endl;
            }
        }

        cout << "Player " << players.top() << endl;
    }

    return 0;
}
