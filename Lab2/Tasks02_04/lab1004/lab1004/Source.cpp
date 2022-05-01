#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "ukr");

	long long int i, j;
	double Summ = 0, Total = 1;

	for (i = 10; i <= 50; i++);
	{
		for (j = 5; j <= 50; j++)
		{
			Summ = Summ + j * cos(j);
		}
		Total = Total * (i * cos(i) - Summ);
		Summ = 0;
	}
	cout << "Âiäïîâiäü: "<< Total << "\n";

	return 0;
}