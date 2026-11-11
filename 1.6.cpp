#include <iostream>
using namespace std;
int main() {
    float purchase, discount = 0, finalAmount;
    int premium, unpaid;
    cout << "Enter Purchase Amount, Premium (1/0), Unpaid Order (1/0): ";
    cin >> purchase >> premium >> unpaid;

    if (unpaid == 1) {
        cout << "Order Cannot be Confirmed - Unpaid Previous Order";
        return 0;
    } else if (purchase > 50000) {
        discount = purchase * 0.20;
    } else if (purchase > 25000) {
        discount = purchase * 0.15;
    } else if (purchase > 10000) {
        discount = purchase * 0.10;
    } else {
        discount = 0;
    }

    if (premium == 1) {
        discount = discount + purchase * 0.05;
    }

    finalAmount = purchase - discount;

    if (finalAmount > 20000) {
        cout << "Delivery Free" << endl;
    } else {
        finalAmount = finalAmount + 500;
        cout << "Delivery Charges: Rs. 500" << endl;
    }
    cout << "Payable Amount: Rs. " << finalAmount;
    return 0;
}
