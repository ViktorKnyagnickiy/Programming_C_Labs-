#include <iostream>
#include <math.h>
#include "Lab1.h"

using namespace std;
int Lab1() {
	setlocale(LC_CTYPE, "ukr");
	float a, b;
	cout << "����i�� ����� �����: ";
	cin >> a;
	cout << "����i�� ����� �����: ";
	cin >> b;

	float arithmetic = (a * a + b * b) / 2;
	float geometric = sqrt(pow(a, 3) * pow(b, 3));
	float Suma = arithmetic + geometric;


	cout << "���� ���������� ������������� ���i� ������� i ������� ����� �� ���������� ������������� i� �������i� = " << Suma;



	
	return 0;
}
