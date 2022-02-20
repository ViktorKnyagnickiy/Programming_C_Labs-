#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");

	int a, z1, z2;
	cout << "¬ведiть значенн€ а: ";
	cin >> a;
	
	z1 = 1 - (1 / 4) * pow(sin(2 * a), 2) + cos(2 * a);
	
	z2 = pow(cos(a), 2) + pow(cos(a), 4);
	cout << z1<<endl;
	cout << z2 << endl;


	return 0;
}
