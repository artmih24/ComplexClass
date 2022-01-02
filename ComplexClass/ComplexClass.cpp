#include <cmath>
#include <string>
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex z = Complex(2, 2);
    Complex z0;
    Complex z1 = Complex("2+2j");
    Complex z2 = Complex("2-2j");
    Complex z3 = Complex(2);
    Complex z4 = Complex(0, 2);

    cout << z << endl;
    // cout << z0 << endl;
    cout << z1 << endl;
    cout << z2 << endl;
    // cout << z3 << endl;
    // cout << z4 << endl;
    // cout << (z3 + z4) << endl;
    // cout << (z3 - z4) << endl;
    cout << z1.Conjugate() << endl;
    cout << z2.Conjugate() << endl;
    // cout << z1.ToString() << endl;
    // cout << z2.ToString() << endl;
    cout << z + 2 << endl;
    cout << 2 + z << endl;
    // cout << z - 2 << endl;
    // cout << 2 - z << endl;
    cout << z * z << endl;
    cout << z * 2 << endl;
    cout << 2 * z << endl;
    cout << z / z << endl;
    cout << z / 2 << endl;
    cout << 2 / z << endl;
    z0 += z;
    cout << z0 << endl;
    cout << -z0 << endl;
    system("pause");
    return 0;
}