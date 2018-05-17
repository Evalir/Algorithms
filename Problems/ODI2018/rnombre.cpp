#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
    string word, arr;
    cin >> word >> arr;
    map<char,int> F1,F2;
    for(int i = 0; i < word.size(); i++)
        F1[word[i]]++;
    for(int i = 0; i < arr.size(); i++)
        F2[arr[i]]++;
    for(auto x : F1) {
        if (x.second > F2[x.first]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "SI" << endl;
    return 0;
}
