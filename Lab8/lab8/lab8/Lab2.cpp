#include <iostream>
#include <math.h>
#include <conio.h>
#include "Lab2.h"
using namespace std;

int Lab2() {
	setlocale(LC_CTYPE, "ukr");
	double  x1, y1, x2, y2, s1, s2;
	cout << "����i�� ���������� ����� x1:" << endl;
	cin >> x1;
	cout << "����i�� ���������� ����� y1:" << endl;
	cin >> y1;
	cout << "����i�� ���������� ����� x2:" << endl;
	cin >> x2;
	cout << "����i�� ���������� ����� y2:" << endl;
	cin >> y2;
	s1 = sqrt(x1 * x1 + y1 * y1);
	s2 = sqrt(x2 * x2 + y2 * y2);

	if (s1 > s2) {
		cout << "����� ����� ����������� ���I �i� ������� ���������.";
	}else if(s1 == s2) {
			cout<< "����� ����������� �i������ ��������� ��������.";
	}
	else {
		cout << "����� ����� ����������� ���I �i� ������� ���������.";
	}



	
	
	return 0;
}
	
