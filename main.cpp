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
/*
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
*/

// Урок 3.1  (ДЗ1)
/*
#include <iostream>

using namespace std;

namespace geek
{
    int a = 1;
    int b = 2;
    int c = a + b;
}

int main(int argc, char** args)
{
    cout << geek :: c << endl;
    return 0;
}
*/

// Урок 3.2 (ДЗ2)
/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    cout << "Введите целое число: ";
    int a;
    cin >> a;

    int c;
    int d;

    if (a > 5)  {
        cout << "Введите ещё одно целое число: " << endl;
        int b;
        cin >> b;
            if ((b > 5) && (b < 10))    {
                c = b - 5;
            }

    } else {
        d = 5 - a;
    }

    ((c > 0) || (d > 0)) ? cout << "Результат вычислений положительный" << endl : cout << "Результат вычислений отрицательный" << endl;

    return 0;
} */

// Урок 3.3 (ДЗ3)
/*
#include <iostream>

using namespace std;

enum constant_set
{
    csConstant1 = 0,
    csConstant2 = 1,
    csConstant3 = 2,
    csConstant4 = 3,
    csConstant5 = 4,
    csConstant6 = 5
}c_set;

int main(int argc, char** args)
{
    int a;
    cout << "Введите целое знаковое число: ";
    cin >> a;

    switch(a)
    {
       case csConstant1:
       case csConstant2:
       case csConstant3:
            cout << "Указали число от 0 до 2" << endl;
            break;
       case csConstant4:
       case csConstant5:
       case csConstant6:
            cout << "Указали число от 3 до 5" << endl;
            break;
       default:
            cout << "Указали число либо меньше 0 или больше 5" << endl;
            break;
    }

    return 0;
} */

// Урок 3.4
/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a;
    int b;

    do
    {
        cout << "Введите целое беззнаковое число: " << endl;
        cin >> a;

        (a > 3) ? cout << a << endl : cout << "Повторите ввод" << endl;

        do {
            cout << a-- << endl;
        } while (a > 0);

    } while (a <= 3);

    return 0;
}*/

// Урок 3.5
/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a;
    int b;

    cout << "Choose how many wands in game (from 10 to 30): ";
    cin >> a;

    while(a > 0)
    {
    if((a > 3) || (a < 1)) continue;
    cout << "Please type in range from 10 to 30: " << endl;
    }

    return 0;
}*/

/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a = 20;
    int b = 0;
    while(b != a)
    {
        cout << "Enter num: ";
        cin >> b;
        if(b < a)
        {
            cout << "Gimme more!" << endl;
        }
        else if(b > a)
        {
            cout << "Gimme less!" << endl;
        }
    }
    cout << "Guess!" << endl;
    return 0;
}*/

// Урок 3.6
/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    char ar[10];
    for(int i = 0, j = 0, k = 0; i < 10; i++, j += 3)
    {
        ar[i] = i;
        ar[i] = j;

        cout << ar[i] << endl;
        cout << ar[i] << endl;
    }
    return 0;
}*/

/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int ar[10];
    for(int i = 0, j = 0; i < 10; i++, j += 3)
    {
        ar[i] = j;
        cout << ar[i] << endl;
    }
    return 0;
}*/

// Урок 3.7
/*
#include <iostream>

using namespace std;

int main(int argc, char** args)
{
    int a;
    cin >> a;
    try {
       if(a == 0) throw "Division by zero\n";
       cout << 4 / a << endl;
    }  catch (char const* e) {
       cout << e;
    }
    cout << 4 / a;
    return 0;
} */
