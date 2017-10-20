//Problem 96A from codeforces
//By evalir.io

#include <iostream>
#include <string>
using namespace std;

int main(){

string players;
int counter1 = 0;
int counter0 = 0;

cin >> players;

for (int i = 0; i < players.length(); i++) {

  if (players[i] == '0' && players[i + 1] != '1') {
    counter0++;

  } else if (players[i] == '1' && players[i + 1] != '0') {
    counter1++;

  } else if (counter0 == 6 && players[i] == '0' && players[i + 1] == '1') {
    counter0++;

  } else if (counter1 == 6 && players[i] == '1' && players[i + 1] == '0') {
    counter1++;

  } else if (players[i] == '0' && players[i + 1] == '1') {
    counter0 = 0;

  } else if (players[i] == '1' && players[i + 1] == '0') {
    counter1 = 0;

  }

  if (counter0 >= 7 || counter1 >= 7) {
    cout << "YES" << endl;
    break;
  }

  }

  if (counter1 < 7 && counter0 < 7) cout << "NO";
}
