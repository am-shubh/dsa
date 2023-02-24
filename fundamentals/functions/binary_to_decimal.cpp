#include <iostream>
#include <math.h>
using namespace std;

int bin_2_dec(int n) {
    int decimal = 0;
    int rem, i = 0;

    while(n > 0){
        rem = n % 10;
        decimal += rem * pow(2, i++);
        n /= 10;
    }

    return decimal;
}

int main(){

    int binary, decimal;
    cout << "Enter Binary : ";
    cin >> binary;

    decimal = bin_2_dec(binary);
    cout << "Decimal = " << decimal << endl;

    return 0;
}