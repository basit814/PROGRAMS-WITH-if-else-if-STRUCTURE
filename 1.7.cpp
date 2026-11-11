#include <iostream>
using namespace std;
int main() {
    float salary, attendance, rating, bonus = 0, finalSalary;
    int years;
    cout << "Enter Salary, Attendance %, Rating (1-5), Years: ";
    cin >> salary >> attendance >> rating >> years;

    if (rating < 3) {
        bonus = 0;
        cout << "Not Eligible for Bonus" << endl;
    } else if (attendance < 75) {
        bonus = 0;
    } else if (attendance >= 75 && attendance <= 89) {
        bonus = salary * 0.05;
    } else if (attendance >= 90 && attendance <= 95) {
        bonus = salary * 0.10;
    } else if (attendance > 95) {
        bonus = salary * 0.15;
    }

    finalSalary = salary + bonus;
    if (years > 5) {
        finalSalary = finalSalary + 5000;
    }
    cout << "Final Salary: Rs. " << finalSalary;
    return 0;
}
