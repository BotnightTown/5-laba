#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int K;
    cout << "������ K (� ������� �� 1 �� 5): ";
    cin >> K;
    switch (K)
    {
    case 1:
        cout << "������";
        break;
    case 2:
        cout << "�����������";
        break;
    case 3:
        cout << "���������";
        break;
    case 4:
        cout << "�����";
        break;
    case 5:
        cout << "³�����";
        break;
    default:
        cout << "�������: K �� ���������� �������� �� 1 �� 5";
    }
    cout << endl;
    system("pause");
}