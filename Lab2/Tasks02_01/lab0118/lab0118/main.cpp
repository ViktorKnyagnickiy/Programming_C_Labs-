#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "ukr");
	double  x1, y1, x2, y2, s1, s2;
	cout << "Введiть координати точки x1:" << endl;
	cin >> x1;
	cout << "Введiть координати точки y1:" << endl;
	cin >> y1;
	cout << "Введiть координати точки x2:" << endl;
	cin >> x2;
	cout << "Введiть координати точки y2:" << endl;
	cin >> y2;
	s1 = sqrt(x1 * x1 + y1 * y1);
	s2 = sqrt(x2 * x2 + y2 * y2);

	if (s1 > s2) {
		cout << "ПЕРША точка знаходиться ДАЛI вiд початку координат.";
	}else if(s1 == s2) {
			cout<< "Точки знаходяться вiдносно координат однаково.";
	}
	else {
		cout << "ДРУГА точка знаходиться ДАЛI вiд початку координат.";
	}



	
	_getch();
	return 0;
}
	
