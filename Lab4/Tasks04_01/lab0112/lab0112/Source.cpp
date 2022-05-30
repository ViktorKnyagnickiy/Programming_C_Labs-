#include <iostream>
#include <conio.h>

using namespace std;





int main()
{
	setlocale(LC_ALL, "");

	const int n = 50;
	double mas[n];
	double norm = 0;

	for (int i = 1; i < n; i++) {

		cout << "Введiть кiлькiсть осадкiв в " << i + 1950 << " роцi :";
		cin >> mas[i];
		norm = norm + mas[i];
	}
	norm = norm / n;
	for (int i = 1; i < n; i++) {
		if (mas[i] > norm) {
			cout << "В " << 1900 + i << " кiлькiсть осадкiв була на " << (mas[i] - norm) << " мл бiльше норми.";
		}
		else {
			if (mas[i] < norm) {
				cout << "В " << 1900 + i << " кiлькiсть осадкiв була на " << (mas[i] - norm) << " мл менше норми.";
			}
			else {
				cout << "В " << 1900 + i << " кiлькiсть осадкiв була в нормi.";

			}

		}
	}
	cout << "Середня кiлькiсть осадкiв=" << norm << ".";
}


