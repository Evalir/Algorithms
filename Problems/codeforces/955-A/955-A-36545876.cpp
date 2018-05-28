#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

double calculateCost(int price, int buns) {
        return price*buns;

}
double calculateWithDiscount(int price, int buns) {
    double p = price * 0.8;
    return p*buns;
}

int main(){
    int H, M, hunger, grow, buncost, bunlow;
    cin >> H >> M;
    cin >> hunger >> grow >> buncost >> bunlow;
    
    double bestans = 1e9;
    double ans;
    int buns;
    vector<double> prices;
    while(H <= 23 && M <= 59) {
        //calculate buns needed
        if (hunger % bunlow != 0) {
            buns = hunger/bunlow + 1;
        }
        else {
            buns = hunger/bunlow;
        }
             
        //cerr << "buns needed: " << buns << endl;
        //calculate cost
        
        if (H < 20)
            ans = calculateCost(buncost, buns);
        else
            ans = calculateWithDiscount(buncost, buns);
        
        
        prices.push_back(ans);
        
        //cerr << "Current hunger: " << hunger << " at " << H << ' ' << M << endl;
       // cerr <<"price is : " << ans << " best is " << bestans << endl;
        
        if (M < 59) {
            M++;
            hunger += grow;
        }
        else if (M == 59) {
            M = 0;
            H++;
            hunger += grow;
        }
    }
    
    for(int i = 0; i < prices.size(); i++) {
        bestans = min(bestans, prices[i]);
    }
    
    printf("%.4f", bestans);
    
    return 0;
    
}