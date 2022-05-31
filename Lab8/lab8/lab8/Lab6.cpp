#include <iostream>
#include <string>
#include <windows.h>
#include "Lab6.h"
using namespace std;

struct WORKER {
	char surname[30];
	char initials[5];
	char post[30];
	int date;
};

void sort(WORKER* Wbase, int size) {   //������������ �����
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (strcmp(Wbase[j].surname, Wbase[j + 1].surname) > 0) {
				WORKER Wtemp = Wbase[j];
				Wbase[j] = Wbase[j + 1];
				Wbase[j + 1] = Wtemp;
			}
		}
	}
}

void print(WORKER* Wbase, int num) {  
	cout << "\n���������  " << Wbase[num].surname;
	cout << "\n������: " << Wbase[num].post;
	cout << "\n��������� �� ������:" << Wbase[num].date << endl;
		
}

int Lab6() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	int N;
	cout << "����i�� �i���i��� ����i����i� : ";
	cin >> N;
	int staj;
	bool f = false;
	WORKER* a = new WORKER[N];
	for (int i = 0; i < N; i++) {
		cout << endl;
		cout << "����i�� i�������i� ��� ����i����� �" << i + 1 << ":" << endl;
		
		cout << "��i�����: ";    cin >> a[i].surname;
		
		cout << "��'�: "; cin >> a[i].initials;
		
		cout << "������: "; cin >> a[i].post;
		
		cout << "г� ����������� �� ������: "; cin >> a[i].date;
	}
	cout << endl;
	cout << endl;
	sort(a, N);
	cout << "������ ���� ������ � ���������� : " << endl;
	cin >> staj;
	cout << "������� ����������, ��� ���� ������ � ���������� �������� "
		<< staj << " ����:";
	for (int i = 0; i < N; i++) {
		if ((2022 - a[i].date) >= staj) {
			print(a, i);
			f = true;   
		}
	}
	if (!f)
		cout << "³�����." << endl;
	
	delete[] a;
	system("pause");
	return 0;
}