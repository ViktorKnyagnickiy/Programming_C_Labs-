#include <iostream>
#include "Lab4_2.h"

using namespace std;



int Lab4_2()
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
    cout << "������ ��i�������� " << amount << " �������i�." << endl;
    return 0;
}