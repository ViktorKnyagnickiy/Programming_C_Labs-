#include <iostream>
#include <cmath>
#include "Lab4.h"
using namespace std;

double f(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int Lab4() {
    setlocale(LC_CTYPE, "ukr");
    int n, tmp;
    double max = 0.0;
    struct Point {
        double x;
        double y;
    };
    cout << "¬ведiть кiлькiсть точок:\n";
    cout << "n = ";
    cin >> n;
    Point* obj = new Point[n];
    cout << "¬ведiть точки:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ":\n";
        cout << "x = ";
        cin >> obj[i].x;
        cout << "y = ";
        cin >> obj[i].y;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (f(obj[i].x, obj[i].y, obj[j].x, obj[j].y) > max) {
                max = f(obj[i].x, obj[i].y, obj[j].x, obj[j].y);
            }
        }
    }
    
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fabs(f(obj[i].x, obj[i].y, obj[j].x, obj[j].y) - max) < 0.00000001) {
                k++;
                cout << "ѕара точок є " << k << " => (" << i + 1 << ", " << j + 1 << ")\n";
            }
        }
    }
    delete[] obj;
    system("pause");
    return 0;
}