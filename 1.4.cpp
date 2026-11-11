#include <iostream>
using namespace std;
int main() {
    int age, heart;
    float temp, oxygen;
    cout << "Enter Age, Temp(F), Oxygen %, Heart Rate: ";
    cin >> age >> temp >> oxygen >> heart;

    if (oxygen < 90 || heart > 130 || heart < 45) {
        cout << "Critical - Immediate Treatment";
    } else if (age > 65 && temp > 102) {
        cout << "High Priority";
    } else if (oxygen >= 90 && oxygen <= 94) {
        cout << "Moderate";
    } else {
        cout << "Normal";
    }
    return 0;
}
