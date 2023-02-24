#include <iostream>
using namespace std;

bool check_prime(int number){
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    bool is_prime;

    cout << "Enter number : ";
    cin >> number;

    for(int i = 2; i <= number; i++){
        is_prime = check_prime(i);
        if(is_prime){
            cout << i << " ";
        }
    }

    return 0;
}