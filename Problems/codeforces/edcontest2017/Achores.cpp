#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k, x;
    vector<int> chores;
    cin >> n >> k >> x;

    for(int i = 0; i < n; i++){
	int ch;
	cin >> ch;
	chores.push_back(ch);
    }
    
    sort(chores.begin(), chores.end(), greater<int>());
    
    for(int i = 0; i < k; i++) 
	if (chores[i] > x) chores[i] = x;
    
    int sum = 0;
    for(int i = 0; i < chores.size(); i++)
	sum += chores[i];

    
    cout << sum << endl;
    
    return 0;
}