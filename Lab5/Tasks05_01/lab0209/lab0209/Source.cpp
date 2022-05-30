#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int ascii_cod(char x);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    char c;
    cout << "         Введите символ: ";
    cin >> c;
    int b = ascii_cod(c);
    cout << " ASCII код этого символа " << c << " = " << b << endl;

    cout << "____________________________________" << endl;

    int ch;
    cout << "Введите ASCII код: ";
    cin >> ch;
    cout << " символ:  ";
    cout.put(ch);

    
}

int ascii_cod(char x)
{
    int a;
    a = x;
    return a;
}