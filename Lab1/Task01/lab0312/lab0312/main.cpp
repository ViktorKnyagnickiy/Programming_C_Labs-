#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
	int a, b, c, p, h;
	cout << "Введiть довжину A: ";
	cin >> a;
	cout << "Введiть довжину B: ";
	cin >> b;
	cout << "Введiть довжину C: ";
	cin >> c;
	p = (a + b + c) / 2;
	h = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / a;
	cout << "Довжина висоти, опущеної з вершини A: " << h;





	return 0;
}