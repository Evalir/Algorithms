#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
using ll = long long;

class  Reroll {
public:
     int minimumDice(int target, vector <int> dice) {
  		int sum = 0;
        for(int i = 0; i < dice.size(); i++)
            sum += dice[i];
        if (sum < target) {
            cerr << "hey" << endl;
            sort(dice.begin(), dice.end());
            int ans = 0;
            for(int i = 0; i < dice.size(); i++) {
                ans++;
                if (sum + (abs(dice[i]-6)) >= target) 
                    return ans;
                else
                    sum += abs(dice[i]-6);
            }
        }
        if (sum == target) return 0;
        if (sum > target) {
            cerr << "big" << endl;
            sort(dice.begin(), dice.end(), greater<int>());
            int ans = 0;
            for(int i = 0; i < dice.size(); i++) {
                ans++;
                if (sum - (abs(1-dice[i])) <= target) 
                    return ans;
                else
                    sum -= abs(1-dice[i]);
            }
            return ans;
        }
    }
};

int main() {
        Reroll p;
        cout << p.minimumDice(10,{4,2,4,5}) << endl;
    }
