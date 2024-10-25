#include <iostream>
#include <NTL/ZZ.h>
#include <NTL/ZZ_p.h>

using namespace std;
using namespace NTL;

int main()
{
    ZZ p = conv<ZZ>(23);
    ZZ_p::init(p);

    ZZ_p g = conv<ZZ_p>(5);
    ZZ_p h = conv<ZZ_p>(8);
    ZZ_p m = conv<ZZ_p>(15);
    ZZ k = conv<ZZ>(3);
    ZZ_p c1, c2;

    power(c1, g, k);

    ZZ_p hk;
    power(hk, h, k);
    c2 = m * hk;

    cout << "Original Message : " << m << endl;
    cout << "C1 : " << c1 << endl;
    cout << "C2 : " << c2 << endl;

    return 0;
}
