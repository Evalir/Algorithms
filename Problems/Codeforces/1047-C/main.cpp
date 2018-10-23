#include<bits/stdc++.h>
using namespace std;
using Long = long long;
Long arr[300008];
int main() {
    Long N,c = 0;
    memset(arr,-1,sizeof(arr));
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    Long G = arr[N-2];
    for(int i= N-1;i >= 2; i--) {
        G = __gcd(arr[i],G);
        c++;
        if(G > arr[i-2]) {

            cout<<N-c-1<<endl;
            return 0;
        }


    }
    cout << -1 << endl;
    return 0;
}