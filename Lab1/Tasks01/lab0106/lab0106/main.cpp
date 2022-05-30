#include <iostream>
#include <math.h>


using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
	float a, b;
	cout << "¬ведiть перше число: ";
	cin >> a;
	cout << "¬ведiть друге число: ";
	cin >> b;

	float arithmetic = (a * a + b * b) / 2;
	float geometric = sqrt(pow(a, 3) * pow(b, 3));
	float Suma = arithmetic + geometric;


	cout << "—ума середнього геометричного кубiв першого i другого числа та середнього арифметичного iх квадратiв = " << Suma;



	
	return 0;
}
