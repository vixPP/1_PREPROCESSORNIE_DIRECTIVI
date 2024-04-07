#include <iostream>
#include "add.h"

#define MODE 1

int add(int num1, int num2)
{
    return num1 + num2;
}

#ifndef MODE;
#error "Необходимо определить MODE";
#endif

using namespace std;



int main()
{
    int num1;
    int num2;

#if MODE == 0
    {
        cout << "Работаю в режиме тренировки" << endl;
        return 0;
    }
#elif MODE == 1

    int add(int num1, int num2);

    cout << "Работаю в боевом режиме" << endl;
    
    cout << "Введите число 1: " ;
    cin >> num1;

    cout << "Введите число 1: " ;
    cin >> num2;

    cout << "Результат сложения: " << num1 << " + " << num2 << " = " << add(num1, num2);
    
    return 0;

#else 

    cout << "Неизвестный режим. Завершение работы. " << endl;

    return 0;

#endif
}
