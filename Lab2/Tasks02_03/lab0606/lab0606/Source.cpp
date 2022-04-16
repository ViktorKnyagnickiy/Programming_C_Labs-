#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n, f;
	cout << "¬ведiть степiнь дл€ числа 2 : " << endl;
	cin >> n;

	f = pow(2, n);
	cout <<"„исло 2 в данному степенi буде :\n"<<f;



	_getch();
	return 0;
}