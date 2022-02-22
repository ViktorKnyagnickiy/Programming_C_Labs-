#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a, x, b, c,F;
	cout << "¬ведiть a: ";
	cin >> a;
	cout << "¬ведiть x: ";
	cin >> x;
	cout << "¬ведiть b: ";
	cin >> b;
	cout << "¬ведiть c: ";
	cin >> c;
	if (x < 5 && c != 0) {
		F = -a * pow(x, 2) - b;
		cout << F << "\nѕрацюЇ перша умова!";
	}
	else if (x > 5 && c == 0) {
		F = (x - a) / x;
		cout << F << "\nѕрацюЇ друга умова!";
	}
	else{
		F = -(x / c); // якщо спрацьовуЇ цей випадок, а зм≥нна с дор≥внюЇ 0, то виходить помилка, адже д≥ленн€ на 0 - неможливе!
		cout << F << "\nIнший випадок!";
	}
		
	
		

	_getch();
	return 0;
}
