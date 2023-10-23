#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int K;
    cout << "Введіть K (у діапазоні від 1 до 5): ";
    cin >> K;
    switch (K)
    {
    case 1:
        cout << "Погано";
        break;
    case 2:
        cout << "Незадовільно";
        break;
    case 3:
        cout << "Задовільно";
        break;
    case 4:
        cout << "Добре";
        break;
    case 5:
        cout << "Відмінно";
        break;
    default:
        cout << "Помилка: K не задовільняє діапазону від 1 до 5";
    }
    cout << endl;
    system("pause");
}