#include <iostream>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_CTYPE, "ukr");

	int a, S;

	int* ptra = &a;

	cout << "Введiть сторону квадрату(в сантиметрах) : ";
	cin >> *ptra;
	S = a * a;
	cout << "Площа квадрату = " << S << "cм^2";





	return 0;
}