#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
	float ft;
	

	cout << "¬ведiть зрiст людини в футах : ";
	cin >> ft; 
	float cm = ft*30.48;
	
	cout << "«рiст людини в сантиметрах :" << cm;

	return 0;
}
