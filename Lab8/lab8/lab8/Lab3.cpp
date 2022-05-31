#include <iostream>
#include <math.h>
#include "Lab3.h"
using namespace std;

int Lab3()
{
    setlocale(LC_CTYPE, "ukr");
    float a, b;
    cout << "Ввести a : ";
    cin >> a;
    cout << "Ввести b : ";
    cin >> b;
    float* ptra = &a;
    float* ptrb = &b;

    if (a > b) {

        a = *ptra + 7;
        cout << "Бiльша a = " << a << endl;
        b = *ptrb - 3;
        cout << "Менша b = " << b << endl;
    }
    else {
        b = *ptrb + 7;
        cout << "Бiльша b = " << b << endl;
        a = *ptra - 3;
        cout << "Менша a = " << a << endl;

    }

    return 0;

}