#include <stdio.h>
#include <string>
using namespace std;
char buff[10000];
int main()
{
    while(scanf("%s", buff)){
        string s = buff;
        if(s == "0") break;
       // printf("%d\n", s.length());
        while(s.length() > 1){
            int cnt = 0;
            for(int i=0; i<s.length(); i++){
                cnt += s[i]-'0';
            }
            char cntTemp[200];
            sprintf (cntTemp, "%d", cnt);
           // printf("%s\n", cntTemp);
            s = cntTemp;
           // break;
            //s = cntTemp;
            //printf("%s", cntTemp);
        }
        printf("%s\n", s.c_str());
    }
    return 0;
}
