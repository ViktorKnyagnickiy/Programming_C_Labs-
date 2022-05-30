#include <iostream> 
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    const int n = 5;
    int a[n][n];
    srand(time(0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            a[i][j] = rand() % 10;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        int min = a[i][0];
        for (int j = 1; j < n; ++j)
            if (a[i][j] < min)
                min = a[i][j];
        cout << "Мiнiмальне значення в " << i + 1 << " строцi = " << min << endl;
    }
    cout << endl;
    for (int j = 0; j < n; ++j)
    {
        int max = a[0][j];
        for (int i = 0; i < n; ++i)
            if (a[i][j] > max)
                max = a[i][j];
        cout << "Максимальне значення в " << j + 1 << " стовбцi = " << max << endl;
    }
}