#include <iostream>
using namespace std;

float area_circle(float radius){
    float area = 3.14 * radius * radius;
    return area;
}

int main(){
    float radius;
    cout << "Enter Radius of circle : ";
    cin >> radius;

    float area = area_circle(radius);

    cout << "Area of circle = " << area << endl;

    return 0;
}