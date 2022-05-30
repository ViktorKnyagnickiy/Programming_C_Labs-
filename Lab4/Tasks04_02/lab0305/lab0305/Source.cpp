#include <iostream>


using namespace std;



int main()
{
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    const int N = 20;
    int A[N];
    int amount, i, j;
    for (i = 0; i < N; i++)
    {
        
        A[i] = rand()%10;
        cout << A[i]<<" ";
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