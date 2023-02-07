#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs [] ) {

     setlocale(LC_ALL, "Russian");

    int celsius;
    int factor;
    int fahrenheit;

    cout << "Введите температуру в градусах Цельсия:";
    cin >> celsius;

    factor = 212 - 32;

    fahrenheit = factor * celsius/100 + 32;

    cout << "Температура в градусах Фаренгейта:  ";
    cout << fahrenheit << endl;


    system("pause");
    return 0;
}
