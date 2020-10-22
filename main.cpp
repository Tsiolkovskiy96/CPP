// <<Урок №1>>

/*#include <iostream>                 // Подключение стандартной библиотеки

#define IT_WORKS "It works!"        // Подстановочная константа

using namespace std;                  // Разрешение использования имен из стандартной библиотеки

int main (int argc, char** args)    // Внутренние имена
{
    const int SUCCESS = 0;          // Имя константы
    cout << IT_WORKS << endl;      // Обращение к стандартной библиотеке
    return SUCCESS;                 // Операция возврата
}
*/

// Урок №2.1
/*
#include <iostream>

short a = 45000;
unsigned char b = 1400;

using namespace std;

int main (int argc, char** args)
{
   const int SUCCESS = 0;
   cout << a << endl;
   cout << b << endl;
   return SUCCESS;
} */

// Урок №2.2
/*
#include <iostream>     // Имена для вывода данных
#include <iomanip>      // Имена флагов отображения чисел */
       /* Флаги действуют до вывода на имя cout следующего флага
        * Флаг 'dec' отображает число как десятичное
        * Флаг 'hex' отображает число как шестнадцатеричное */
/*
using namespace std;

int main(int argc, char** args)
{
    int a = 264000;     // Размер хранениния 32 разряда
    unsigned long b = 123456789;    // Размер хранения 64-128 разрядов
    // Вывод данных на экран
    cout << dec << a << endl;
    cout << hex << &a << endl;
    cout << dec << b << endl;
    cout << hex << &b << endl;
    return 0;
} */

// Урок 2.3 (Домашнее задание)
/*
#include <iostream>
#include <iomanip>

using namespace std;

int TailVal(int a, unsigned long b)
{
    return a % b;

}

int main(int argc, char** args)
{
    int a = 264000;
    unsigned long b = 123456789;

    TailVal(a, b);

    char d = a/b;

    cout << dec << (d, TailVal) << endl;

    return 0;
}
*/

// Урок 2.6

#include <iostream>

using namespace std;

void print(char str[7])
{
    str[0] = 'd';
    cout << str << endl;
}

void print(int ar[5])
{
    cout << ar << endl;
}

int main(int argc, char** args)
{
    int array[5] = {-1, 2, 4, 5, 6};
    cout << array[0] << endl;

    char str[7] = "string";
    print(str);
    print(array);
    return 0;
}
