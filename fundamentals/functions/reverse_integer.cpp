#include <iostream>
using namespace std;

int reverse(int number){
    int answer = 0;

    while(number > 0){
        answer = answer * 10 + (number % 10);
        number = number / 10;
    }

    return answer;
}

int main(){

    int number, reverse_num;
    bool is_neg = false;
    
    cout << "Enter number : ";
    cin >> number;

    if(number < 0){
        is_neg = true;
        number = -number;
    }

    reverse_num = reverse(number);

    if(is_neg){
        reverse_num = -reverse_num;
    }
    cout << "Reverse = " << reverse_num << endl;

    return 0;
}