#include <iostream>
#include <NTL/ZZ.h>
#include <NTL/ZZ_p.h>

using namespace std;
using namespace NTL;

void fun()
{
    ZZ_p c, d;
    c = conv<ZZ_p>("12");
    cout << "\n c:: " << c << endl;
}

int main()
{
    ZZ p = conv<ZZ>("33554393"); // Large prime number
    ZZ_p::init(p);               // Set modular arithmetic to use this prime number

    ZZ_p a, b;
    ZZ_p g = conv<ZZ_p>("2"); // Convert "2" to ZZ_p type

    long x = (33554393 / 2);
    ZZ_p h;
    power(h, g, x); // Compute h = g^x mod p

    cout << "\n g:: " << g << "\t h:: " << h << endl;

    bool flag = false;
    for (int i = 1; i < to_int(p); i++)
    {
        ZZ_p h2;
        power(h2, g, i); // Compute h2 = g^i mod p
        if (h2 == h)
        {
            cout << "\nFound i such that g^i == h: i = " << i << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "\nNo such i found." << endl;
    }

    return 0;
}