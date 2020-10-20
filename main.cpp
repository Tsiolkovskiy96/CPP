#include <iostream>                 // Подключение стандартной библиотеки

#define IT_WORKS "It works!"        // Подстановочная константа

using namespace std;                // Разрешение использования имен из стандартной библиотеки

int main (int argc, char** args)    // Внутренние имена
{
    const int SUCCESS = 0;          // Имя константы
    cout << IT_WORKS << endl;      // Обращение к стандартной библиотеке
    return SUCCESS;                 // Опеhация возврата
}
