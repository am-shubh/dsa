#include <iostream>
using namespace std;

long long int factorial(int number){
    long long fact = 1;

    for(int i = 1; i <= number; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){
    int number;
    long long fact;

    cout << "Enter number : ";
    cin >> number;

    fact = factorial(number);
    cout << "Factorial is = " << fact << endl;
}