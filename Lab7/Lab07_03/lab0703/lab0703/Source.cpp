#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int lab1_1()
{
		float a, b;
		cout << "Введiть перше число: ";
		cin >> a;
		cout << "Введiть друге число: ";
		cin >> b;

		float arithmetic = (a * a + b * b) / 2;
		float geometric = sqrt(pow(a, 3) * pow(b, 3));
		float Suma = arithmetic + geometric;


		cout << "Сума середнього геометричного кубiв першого i другого числа та середнього арифметичного iх квадратiв = " << Suma<<endl;
		cout << endl;
		return 0;
}
int lab1_2() {
	setlocale(LC_CTYPE, "ukr");
	float ft;


	cout << "Введiть зрiст людини в футах : ";
	cin >> ft;
	float cm = ft * 30.48;

	cout << "Зрiст людини в сантиметрах :" << cm<<endl;
	cout << endl;

	return 0;
}
int lab2_1(){
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
		cout << "ПЕРША точка знаходиться ДАЛI вiд початку координат." << endl;
		cout << endl;
	}
	else if (s1 == s2) {
		cout << "Точки знаходяться вiдносно координат однаково." << endl;
		cout << endl;
	}
	else {
		cout << "ДРУГА точка знаходиться ДАЛI вiд початку координат." << endl;
		cout << endl;
	}




	
	return 0;
}
int lab2_2() {
	double x, res;
	cout << "Введiть значення x:" << endl;
	cin >> x;
	res = sqrt(x * x - 2.5);
	if (x >= 1.6) {
		cout << "Ваш результат : " << res << endl;
		cout << endl;

	}
	else {
		cout << "Обчислення неможливi - вiд'ємний пiдкореневий вираз!" << endl;
		cout << endl;
	}


	return 0;
}
int lab3(){
	float a, b;
	cout << "Ввести a : ";
	cin >> a;
	cout << "Ввести b : ";
	cin >> b;
	float* ptra = &a;
	float* ptrb = &b;

	if (a > b) {

		a = *ptra + 7;
		cout << "Бiльша a = " << a << endl;
		b = *ptrb - 3;
		cout << "Менша b = " << b << endl;
		cout << endl;
	}
	else {
		b = *ptrb + 7;
		cout << "Бiльша b = " << b << endl;
		a = *ptra - 3;
		cout << "Менша a = " << a << endl;
		cout << endl;

	}

	return 0;
}
int lab4_1() {
	srand(time(NULL));
	const int n = 50;
	double mas[n];
	double norm = 0;

	for (int i = 1; i < n; i++) {

		cout << "Введiть кiлькiсть осадкiв в " << i + 1950 << " роцi :";
		mas[i]= rand()%20;
		norm = norm + mas[i];
	}
	norm = norm / n;
	for (int i = 1; i < n; i++) {
		if (mas[i] > norm) {
			cout << "В " << 1900 + i << " кiлькiсть осадкiв була на " << (mas[i] - norm) << " мл бiльше норми." << endl;
		}
		else {
			if (mas[i] < norm) {
				cout << "В " << 1900 + i << " кiлькiсть осадкiв була на " << (mas[i] - norm) << " мл менше норми." << endl;
			}
			else {
				cout << "В " << 1900 + i << " кiлькiсть осадкiв була в нормi." << endl;

			}

		}
	}
	cout << "Середня кiлькiсть осадкiв=" << norm << "." << endl;
	return 0;
}
int lab4_2() {
	srand(time(NULL));
	const int N = 20;
	int A[N];
	int amount, i, j;
	for (i = 0; i < N; i++)
	{

		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	for (i = 0, amount = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (A[i] == A[j])
			{
				amount++;
				break;
			}
		}
	}
	cout << "Всього спiвпадають " << amount << " елементiв." << endl;
	return 0;
}
int lab5(){
	string str;

	cout << "Стрiчка до змiн: \n";

	getline(cin, str);

	for (int i = 0; i < str.length(); i++)

	{

		if (str[i] == '.')

		{

			if (str[i + 1] == '.' && str[i + 2] == '.')

				i += 2;

			else

			{

				for (int j = 0; j < 2; j++)

				{

					str.insert(i, ".");

					i++;
				}

			}
		}
	}



	cout << "Стрiчка пiсля змiн =\n" << str << endl;
	cout << endl;

	return 0;
}
struct WORKER {
	char surname[30];
	char initials[5];
	char post[30];
	int date;
};

void sort(WORKER* Wbase, int size) {   //бульбашковий метод
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (strcmp(Wbase[j].surname, Wbase[j + 1].surname) > 0) {
				WORKER Wtemp = Wbase[j];
				Wbase[j] = Wbase[j + 1];
				Wbase[j + 1] = Wtemp;
			}
		}
	}
}

void print(WORKER* Wbase, int num) {
	cout << "\nПрацівник  " << Wbase[num].surname;
	cout << "\nПосада: " << Wbase[num].post;
	cout << "\nПрийнятий на работу:" << Wbase[num].date << endl;

}
int lab6() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int N;
	cout << "Введiть кiлькiсть працiвникiв : ";
	cin >> N;
	int staj;
	bool f = false;
	WORKER* a = new WORKER[N];
	for (int i = 0; i < N; i++) {
		cout << endl;
		cout << "Введiть iнформацiю про працiвника №" << i + 1 << ":" << endl;

		cout << "Прiзвище: ";    cin >> a[i].surname;

		cout << "Ім'я: "; cin >> a[i].initials;

		cout << "Посада: "; cin >> a[i].post;

		cout << "Рік надходження на роботу: "; cin >> a[i].date;
	}
	cout << endl;
	cout << endl;
	sort(a, N);
	cout << "Введіть стаж роботи в організації : " << endl;
	cin >> staj;
	cout << "Прізвища працівників, чий стаж роботи в організації перевищує "
		<< staj << " років:";
	for (int i = 0; i < N; i++) {
		if ((2022 - a[i].date) >= staj) {
			print(a, i);
			f = true;
		}
	}
	if (!f)
		cout << "Відсутні." << endl;

	delete[] a;
	system("pause");
	return 0;
}
#define zrazok 123454321

unsigned reverse(unsigned x)
{
	unsigned a = 0;
	while (x) a = 10 * a + (x % 10), x /= 10;
	return a;
}


unsigned reverse_recursively(unsigned x, unsigned a)
{
	return x ? reverse_recursively(x / 10, 10 * a + (x % 10)) : a;
}

bool is_palindrome(unsigned x)
{

	return x == reverse_recursively(x, 0);
}
int lab7(){
	for (unsigned x = zrazok - 1; x != zrazok + 2; x++)
		printf("Число %u - %s\n", x, is_palindrome(x) ? "паліндром" : "не паліндром");

	return 0;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Виклик функції Лабораторної роботи №1, задача №1: " << endl;
	lab1_1();
	cout << "Виклик функції Лабораторної роботи №1, задача №2: " << endl;
	lab1_2();
	cout << "Виклик функції Лабораторної роботи №2, задача №1: " << endl;
	lab2_1();
	cout << "Виклик функції Лабораторної роботи №2, задача №2: " << endl;
	lab2_2();
	cout << "Виклик функції Лабораторної роботи №3: " << endl;
	lab3();
	cout << "Виклик функції Лабораторної роботи №4, задача №1: " << endl;
	lab4_1();
	cout << "Виклик функції Лабораторної роботи №4, задача №2: " << endl;
	lab4_2();
	cout << "Виклик функції Лабораторної роботи №5: " << endl;
	lab5();
	cout << "Виклик функції Лабораторної роботи №6: " << endl;
	lab6();
	cout << "Виклик функції Лабораторної роботи №7: " << endl;
	lab7();

}