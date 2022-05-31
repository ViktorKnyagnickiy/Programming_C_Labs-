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

void sort(WORKER* Wbase, int size) {   //бульбашковий метод
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
	cout << "\nПрацівник  " << Wbase[num].surname;
	cout << "\nПосада: " << Wbase[num].post;
	cout << "\nПрийнятий на работу:" << Wbase[num].date << endl;
		
}

int Lab6() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	int N;
	cout << "Введiть кiлькiсть працiвникiв : ";
	cin >> N;
	int staj;
	bool f = false;
	WORKER* a = new WORKER[N];
	for (int i = 0; i < N; i++) {
		cout << endl;
		cout << "Введiть iнформацiю про працiвника №" << i + 1 << ":" << endl;
		
		cout << "Прiзвище: ";    cin >> a[i].surname;
		
		cout << "Ім'я: "; cin >> a[i].initials;
		
		cout << "Посада: "; cin >> a[i].post;
		
		cout << "Рік надходження на роботу: "; cin >> a[i].date;
	}
	cout << endl;
	cout << endl;
	sort(a, N);
	cout << "Введіть стаж роботи в організації : " << endl;
	cin >> staj;
	cout << "Прізвища працівників, чий стаж роботи в організації перевищує "
		<< staj << " років:";
	for (int i = 0; i < N; i++) {
		if ((2022 - a[i].date) >= staj) {
			print(a, i);
			f = true;   
		}
	}
	if (!f)
		cout << "Відсутні." << endl;
	
	delete[] a;
	system("pause");
	return 0;
}