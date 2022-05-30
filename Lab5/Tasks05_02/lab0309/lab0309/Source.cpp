#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int to_int(char c)
{
    int i = c - '0';
    return i;
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    char str[100];
    char str1[100];
    cout << "Введiть фразу: ";
    cin >> str;
    int len = strlen(str);
    int max = 0;
    int i = 0, j = 0;
    while (i < len)
    {
        int num = 0;
        while (isdigit(str[i]))
        {
            str1[j++] = str[i];
            num = num * 10 + to_int(str[i++]);
        }
        if (num > max) max = num;
        i++;
    }
    str1[j] = 0;
    int len1 = strlen(str1);
    for (int i = 0; i < len1; ++i)
        cout << str1[i];
    cout << endl;
    cout <<"Найбiльше число  : " << max <<endl;
    cin.get();
    cin.get();
    return 0;
}