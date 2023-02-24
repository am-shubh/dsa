#include <iostream>
using namespace std;

// It checks with remainder operator
bool check_even(int n){
    if(n%2==0){
        return true;
    }
    else {
        return false;
    }
}

// It checks with bitwise operator
bool check_bitwise_even(int n){
    if((n&1) == 0){
        return true;
    } else {
        return false;
    }
}

int main(){
    int number;
    cout << "Enter number : ";
    cin >> number;

    bool is_even = check_even(number);

    if(is_even){
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    is_even = check_bitwise_even(number);

    if(is_even){
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}