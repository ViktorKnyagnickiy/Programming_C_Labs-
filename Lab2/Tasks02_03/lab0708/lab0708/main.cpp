#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"ukr");

	double n, a, s = 1;
	cout << "¬ведiть n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		cout << "¬ведiть a" << i + 1 << "= ";
		cin >> a;
	}
	for (int j = 1; j <= n; j++) {
		s = s + (a/(j+j));
	}
	cout << "–езультат = " << pow(s, 2);
	return 0;
}