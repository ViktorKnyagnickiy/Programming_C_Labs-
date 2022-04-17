#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");

	float* ptra = new float;
	cout << "Перше число : ";
	cin >> *ptra;
	float* ptrb = new float;
	cout << "Друге число : " ;
	cin >> *ptrb;
	float* ptrc = new float;
	cout << "Третє число : ";
	cin >> *ptrc;
	*ptra = *ptra / 2;
	cout << "Зменшена вдвiчi перша змiна : "<< *ptra;

	return 0;
}