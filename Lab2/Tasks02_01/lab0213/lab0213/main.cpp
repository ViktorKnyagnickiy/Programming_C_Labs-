#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
	double x,res;
	cout << "Введiть значення x:" << endl;
	cin >> x;
	res = sqrt(x * x - 2.5);
	if (x >= 1.6){
		cout <<"Ваш результат : "<< res << endl;
		cout << endl;
	
	}
	else {
		cout << "Обчислення неможливi - вiд'ємний пiдкореневий вираз!" << endl;
		cout << endl;
	}

	
	return 0;
}