#include <iostream>
using namespace std;

void check_prime(int number){
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            cout << "Number is not Prime" << endl;
            return;
        }
    }
    cout << "Number is Prime" << endl;
}

int main(){
    int number;

    cout << "Enter number : ";
    cin >> number;

    check_prime(number);

    return 0;
}