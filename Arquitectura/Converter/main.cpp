#include <bits/stdc++.h>
using namespace std;
using Long = long long;

struct ASCIIConverter {
    string magic(string ASCIIString) {
        string humanString = "";
        string cur = "";
        for(auto &x : ASCIIString) {
            if (x != ' ') cur += x;
            if (x == ' ' && cur.size() > 0) {
                int c = 0;
                for(auto &it : cur) {
                    c = c * 10 + it-'0';
                }
                cur = "";
                humanString += (char)c;
            }

        }
        if (cur.size() > 0) {
            int c = 0;
            for(auto &it : cur) {
                c = c * 10 + it-'0';
            }
            cur = "";
            humanString += (char)c;
        }
        return humanString;
    }
};

struct TuRealConverter {
    string BinaryToDecimal(string binary) {
        Long to = 0;
        Long num = 0;
        for(int i = binary.size() - 1; i >= 0; --i) {
            num += (pow(2LL,to) * (binary[i]-'0')*1LL);
            to++;
        }
        return to_string(num);
    }
    string DecimalToBinary(Long dec) {
        string res = "";
        while(dec) {
            res += (char)((dec % 2LL)+'0');
            dec >>= 1LL;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    string DecimalToHexadecimal(Long dec) {
        string res;
        string conversionTable[] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
        while(dec) {
            Long k = dec % 16LL;
            res += conversionTable[k];
            dec >>= 4LL;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    Long HexadecimalToDecimal(string hexa) {
        Long res = 0;
        vector<Long> Table(16);
        Table['0'] = 0;Table['1'] = 1;
        Table['2'] = 2;Table['3'] = 3;
        Table['4'] = 4;Table['5'] = 5;
        Table['6'] = 6;Table['7'] = 7;
        Table['8'] = 8;Table['9'] = 9;
        Table['A'] = 10;Table['B'] = 11;
        Table['C'] = 12;Table['D'] = 13;
        Table['E'] = 14;Table['F'] = 15;
        Long to = hexa.size() - 1;
        for(int i = 0; i < hexa.size(); ++i) {
            res += (pow(16,to)*1LL*(Table[hexa[i]]));
            --to;
        }
        return res;
    }
    string DecimalToOctal(Long dec) {
        string res;
        while(dec) {
            res += (char)((dec % 8LL)+'0');
            dec >>= 3LL;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    string OctalToDecimal(string Oct) {
        Long num = 0;
        for(int i = 0; i < Oct.size(); i++) {
            num += Oct[i]-'0';
            if (i != Oct.size() - 1) num <<= 3LL;
        }
        return to_string(num);
    }
};

void testASCII(string s) {
    ASCIIConverter x;
    cout << x.magic(s) << endl;
    return;
}

void testConverter() {
    TuRealConverter klk;
}

int main() {
    ASCIIConverter x;
    cout << x.HexadecimalToDecimal("DEA") << endl;
    return 0;
}