#include <iostream>
using namespace std;
int main() {
    int speed, prev, licence, reg;
    float fine = 0;
    cout << "Enter Speed, Previous Violations (1/0), Licence (1/0), Registration (1/0): ";
    cin >> speed >> prev >> licence >> reg;

    if (speed <= 60) {
        fine = 0;
    } else if (speed <= 80) {
        fine = 2000;
    } else if (speed <= 100) {
        fine = 5000;
    } else {
        fine = 10000;
    }

    if (prev == 1) {
        fine = fine + fine * 0.25;
    } else if (licence == 0) {
        fine = fine + 5000;
    } else if (reg == 0) {
        fine = fine + 10000;
    }

    cout << "Total Fine: Rs. " << fine << endl;
    if (licence == 0 || reg == 0)
        cout << "Vehicle Cannot Continue";
    else
        cout << "Vehicle Can Continue";
    return 0;
}
