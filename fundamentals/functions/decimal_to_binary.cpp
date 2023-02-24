#include <iostream>
#include <math.h>
using namespace std;

int dec_2_bin(int n) {
    int binary = 0;
    int rem, i = 0;

    while(n > 0){
        rem = n % 2;
        binary += rem * pow(10, i++);
        n /= 2;
    }

    return binary;
}

int main(){

    int binary, decimal;
    cout << "Enter Decimal : ";
    cin >> decimal;

    binary = dec_2_bin(decimal);
    cout << "Binary = " << binary << endl;

    return 0;
}