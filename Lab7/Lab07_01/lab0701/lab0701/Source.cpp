#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;
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



int main()
{
    
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (unsigned x = zrazok - 1; x != zrazok + 2; x++)
        printf("Число %u - %s\n", x, is_palindrome(x) ? "паліндром" : "не паліндром");
        
    return 0;
}