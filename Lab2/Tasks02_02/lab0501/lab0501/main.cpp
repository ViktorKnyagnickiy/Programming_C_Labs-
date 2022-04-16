#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n;

    cout << "Введiть назву мiсяця: ";
    cin >> n;

    switch (n)
    {
    case 1: cout << "Сiчень\n"; break;
    case 2: cout << "Лютий\n"; break;
    case 3: cout << "Березень\n"; break;
    case 4: cout << "Квiтень\n"; break;
    case 5: cout << "Травень\n"; break;
    case 6: cout << "Червень\n"; break;
    case 7: cout << "Липень\n"; break;
    case 8: cout << "Серпень\n"; break;
    case 9: cout << "Вересень\n"; break;
    case 10: cout << "Жовтень\n"; break;
    case 11: cout << "Листопад\n"; break;
    case 12: cout << "Грудень\n"; break;
    }

    if ((n == 12) || (n == 1) || (n == 2))
        cout << "Зима\n";
    else if ((n == 3) || (n == 4) || (n == 5))
        cout << "Весна\n";
    else if ((n == 6) || (n == 7) || (n == 8))
        cout << "Лiто\n";
    else if ((n == 9) || (n == 10) || (n == 11))
        cout << "Осiнь\n";
    else
        cout << "Такого мiсяця не iснує!";

    _getch();
    return 0;
}