#include <iostream>
#include <math.h>
#include <conio.h>
#include "Lab2_1.h"

using namespace std;
int Lab2_1() {
	setlocale(LC_CTYPE, "ukr");
	double x,res;
	cout << "����i�� �������� x:" << endl;
	cin >> x;
	res = sqrt(x * x - 2.5);
	if (x >= 1.6){
		cout <<"��� ��������� : "<< res << endl;
		cout << endl;
	
	}
	else {
		cout << "���������� ��������i - �i�'����� �i���������� �����!" << endl;
		cout << endl;
	}

	
	return 0;
}