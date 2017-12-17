#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int robot = 0;
        vector<string> commands;
        int N;
        cin >> N;
        for(int i = 0; i < N; i++) {
            string S;
            cin >> S;
            if (S == "RIGHT") {
                commands.push_back(S);
                robot++;
            }
            else if (S == "LEFT") {
                robot--;
                commands.push_back(S);
            }
            else if (S == "SAME") {
                string t;
                cin >> t;
                int a;
                cin >> a;
                a--;
                if (commands[a] == "LEFT") {
                    robot--;
                    commands.push_back("LEFT");
                }
                else if (commands[a] == "RIGHT") {
                    robot++;
                    commands.push_back("RIGHT");
                }
            }            
        }
        cout << robot << endl;
    }

    return 0;
}