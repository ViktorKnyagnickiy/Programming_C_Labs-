#include <iostream>
#include <math.h>
#include "Lab3.h"
using namespace std;

int Lab3()
{
    setlocale(LC_CTYPE, "ukr");
    float a, b;
    cout << "������ a : ";
    cin >> a;
    cout << "������ b : ";
    cin >> b;
    float* ptra = &a;
    float* ptrb = &b;

    if (a > b) {

        a = *ptra + 7;
        cout << "�i���� a = " << a << endl;
        b = *ptrb - 3;
        cout << "����� b = " << b << endl;
    }
    else {
        b = *ptrb + 7;
        cout << "�i���� b = " << b << endl;
        a = *ptra - 3;
        cout << "����� a = " << a << endl;

    }

    return 0;

}