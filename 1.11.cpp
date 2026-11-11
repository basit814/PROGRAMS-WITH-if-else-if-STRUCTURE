#include <iostream>
using namespace std;
int main() {
    int validInsurance, expired, licence, alcohol, responsible;
    float damage, payable;
    cout << "Valid Insurance (1/0), Expired (1/0), Licence (1/0), Alcohol (1/0), Responsible (1/0), Damage: ";
    cin >> validInsurance >> expired >> licence >> alcohol >> responsible >> damage;

    if (validInsurance == 0 || expired == 1 || licence == 0) {
        cout << "Claim Rejected - Invalid Documents";
    } else if (alcohol == 1) {
        cout << "Claim Rejected - Driver was under alcohol influence";
    } else if (damage < 20000) {
        cout << "Claim Approved without Inspection";
        payable = damage;
    } else if (damage >= 20000 && damage <= 200000) {
        cout << "Claim Approved - Physical Inspection Required";
        payable = damage;
    } else if (damage > 200000) {
        cout << "Claim Approved - Manager Approval Required";
        payable = damage;
    } else {
        payable = 0;
    }

    if (validInsurance == 1 && expired == 0 && licence == 1 && alcohol == 0) {
        if (responsible == 1) {
            payable = payable - payable * 0.20;
            cout << "\n20% Deducted - Driver Responsible";
        }
        cout << "\nFinal Payable Amount: Rs. " << payable;
    }
    return 0;
}
