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
    int N, M;
    cin >> N >> M;
    map<string, string> translation;
    map<string, int> wordl;
    vector<string> lecture;
    vector<string> notebook;

    for(int i = 0; i < M; i++) {
        string A, B;
        cin >> A >> B;
        translation[A] = B;
        wordl[A] = A.length();
        wordl[B] = B.length();
    }

    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;
        lecture.pb(S);
    }   

    for(int i = 0; i < N; i++) {
        if (wordl[lecture[i]] <= wordl[translation[lecture[i]]]) {
            notebook.pb(lecture[i]);
        }
        else {
            notebook.pb(translation[lecture[i]]);
        }
    }

    for(int i = 0; i < notebook.size(); i++) {
        cout << notebook[i] << " ";
    }
    return 0;
}