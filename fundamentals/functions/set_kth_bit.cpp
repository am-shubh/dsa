#include <iostream>
using namespace std;

int set_bit(int number, int k){
    int mask = 1 << k;
    int answer = number | mask;
    return answer;
}

int main(){

    int number, k, result;

    cout << "Enter number : ";
    cin >> number;

    cout << "Enter K : ";
    cin >> k;

    result = set_bit(number, k);

    cout << "Result : " << result << endl;

    return 0;
}