#include <iostream>
#include <string>
#include "Lab5.h"
using namespace std;


int Lab5()

{


    setlocale(LC_CTYPE, "ukr");
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



    cout << "Стрiчка пiсля змiн =\n" << str;

    return 0;

}