#include <iostream>
using namespace std;

int main()
{
    // 1 = Alex, 2= Bob, 3 = Carl

    int x;
    cin >> x;
    int p[x];
    int y = 0;

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < x; i++)
    {
        if (a == p[i])
        {
            d = b;
            b = c;
            c = d;
            y+=1;
        }
        else if (b == p[i])
        {
            d = a;
            a = c;
            c = d;
            y+=1;
        }
    }

    if (y == x)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }



    return 0;
}