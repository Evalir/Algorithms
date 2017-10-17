#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    stack<int> harry;
    stack<int> monk;

    //get coins in harry's stack
    for (int i = 0; i < N; i++) {
        int coin;
        cin >> coin;
        harry.push(coin);
    }
    //get number of instructions and x
    int is, x;
    cin >> is >> x;

    int ccoins = -1;
    for(int i = 0; i < is; i++) {
        string s;
        cin >> s;

        if (monk.size() == x) {
            ccoins = monk.size();
            break;
        }

        if (s == "Harry") {
            int z = harry.top();
            harry.pop();
            monk.push(z);
        }
        if (s == "Remove") {
            if (!monk.empty()) monk.pop();
        }
    }

    cout << ccoins << endl;
}
