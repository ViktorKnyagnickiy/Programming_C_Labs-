#include <iostream>
#include <math.h>
#include <Windows.h>
#include "Lab1.h"
#include "Lab1_2.h"
#include "Lab2.h"
#include "Lab2_1.h"
#include "Lab3.h"
#include "Lab4.h"
#include "Lab4_2.h"
#include "Lab5.h"
#include "Lab6.h"
#include "Lab7.h"

using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ����������� ������ �1: " << endl;
	Lab1();
	cout << endl;
	cout << "������ ����������� ������ �1, ������ 2: " << endl;
	Lab1_2();
	cout << endl;
	cout << "������ ����������� ������ �2, ������ 1: " << endl;
	Lab2();
	cout << endl;
	cout << "������ ����������� ������ �2, ������ 2: " << endl;
	Lab2_1();
	cout << endl;
	cout << "������ ����������� ������ �3: " << endl;
	Lab3();
	cout << endl;
	cout << "������ ����������� ������ �4, ������ 1: " << endl;
	Lab4();
	cout << endl;
	cout << "������ ����������� ������ �4, ������ 2: " << endl;
	Lab4_2();
	cout << endl;
	cout << "������ ����������� ������ �5: " << endl;
	Lab5();
	cout << endl;
	cout << "������ ����������� ������ �6: " << endl;
	Lab6();
	cout << endl;
	cout << "������ ����������� ������ �7: " << endl;
	Lab7();


	return 0;
}