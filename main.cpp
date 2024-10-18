#include <iostream>
#include <NTL/ZZ.h>
#include <NTL/ZZ_p.h>

using namespace std;
using namespace NTL;
int main()
{
    ZZ a = conv<ZZ>("18446744073709551616");
    //ZZ a = conv<ZZ>("18");

    cout << "\n a : " << a << endl;
    for(int i = 0; i < 1; i++){
        a = a * a;
        cout << "\n a : " << a << endl;
    }

        return 0;
}
