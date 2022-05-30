#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double y, t, a,s0=120,s; //де y це швидкість, t - час, а - прискорення, s0 - відома початкова відстань, s- відстань, яку ми шукаємо
	cout << "Введiть швидкiсть : ";
	cin >> y;
	cout << "Введiть час : ";
	cin >> t;
	cout << "Введiть прискорення : ";
	cin >> a;
	

	s = y * (s0 / y) + (a * pow(t, 2) / 2);

	cout << "Вiдстань кiнцева : " << s;

	return 0;
}

