#include <iostream>
#include <math.h>
#include "Lab1_2.h"
using namespace std;
int Lab1_2() {
	setlocale(LC_CTYPE, "ukr");
	float ft;
	

	cout << "¬ведiть зрiст людини в футах : ";
	cin >> ft; 
	float cm = ft*30.48;
	
	cout << "«рiст людини в сантиметрах :" << cm;

	return 0;
}
