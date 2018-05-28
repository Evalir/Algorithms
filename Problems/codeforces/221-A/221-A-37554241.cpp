#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void swap(int a, int b, vector<int>& arr) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    
    
}

void elephantSort(int x, vector<int>& arr) {
    if (x == 0)
        return;
    else {
        elephantSort(x-1, arr);
        swap(x,x-1,arr);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i = n-1; i >= 0; i--) {
        if (i == 1)
            arr[i] = 1;
        else if (i == 0)
            arr[i] = n;
        else
            arr[i] = i;
        
    }
    //elephantSort(n-1, arr);
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}