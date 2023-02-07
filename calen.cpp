#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs [] ) {

    int celsius;
    int factor;
    int fahrenheit;

    cout << "Enter the temperature in degrees Celsius:";
    cin >> celsius;

    factor = 212 - 32;

    fahrenheit = factor * celsius/100 + 32;

    cout << "Temperature in Fahrenheit:  ";
    cout << fahrenheit << endl;


    system("pause");
    return 0;
}
