using ll = long long;
#define ftype ll //replaces int or long long with whatever's needed
struct Fraction {
    ftype num;
    ftype dem;
    Fraction(ftype _num, ftype _dem) {
        num = _num;
        dem = _dem;
    }
    bool operator<(Fraction f)const {
        return f.dem * num < f.num * dem;
    }
    Fraction operator+(Fraction f)const {
        return Fraction(num * f.dem + f.num * dem, f.dem * dem);
    }
    Fraction operator-(Fraction f)const {
        return Fraction(num * f.dem - f.num * dem, f.dem * dem);
    }
    Fraction operator*(Fraction f)const {
        return Fraction(num * f.num, dem * f.dem);
    }
    Fraction operator/(Fraction f)const {
        return Fraction(num, dem) * Fraction(f.dem, f.num);
    }
};


int LIS(vector<int>& arr) { //assumiendo max_N = 10000;
    int ans = 0;
    int dp[10010];
    memset(dp,1,sizeof(dp));
    for(int i = 0; i < (int)arr.size(); i++) {
        for(int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    for(int i = 0; i < (int)arr.size(); i++) {
            ans = max(ans, dp[i]);
    }
    return ans;
}