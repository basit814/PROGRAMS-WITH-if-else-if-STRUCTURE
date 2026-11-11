#include <iostream>
using namespace std;
int main() {
    int age, years, credit;
    float salary, installment;
    cout << "Enter Age, Salary, Employment Years, Installment, Credit Score: ";
    cin >> age >> salary >> years >> installment >> credit;

    if (age < 21 || salary < 50000 || years < 2 || credit < 600) {
        cout << "Loan Rejected";
    } else if (installment > salary * 0.40) {
        cout << "Loan Rejected - Installment too high";
    } else if (salary > 150000 && years > 5) {
        cout << "Loan Approved - Premium Category";
    } else {
        cout << "Loan Approved - Normal Category";
    }
    return 0;
}
