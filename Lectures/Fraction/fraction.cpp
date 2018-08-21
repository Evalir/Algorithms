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