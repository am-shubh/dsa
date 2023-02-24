#include <iostream>
using namespace std;

int main(){

    double celcius, kelvin, fah;

    cout << "Enter Celcius Temperature : ";
    cin >> celcius;

    kelvin = celcius + 273.15;
    fah = (1.80 * celcius) + 32;

    cout << "Kelvin Temperatur = " << kelvin << endl;
    cout << "Fahrenheit Temperature = " << fah << endl;

    return 0;
}