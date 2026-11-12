#include <iostream>
using namespace std;
int main() {
    int units, late, bill;
    cout << "Enter units: ";
    cin >> units;
    cout << "Late payment? (1=Yes, 0=No): ";
    cin >> late;
	 if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100*10 + (units-100)*15;
    } else if (units <= 500) {
        bill = 100*10 + 100*15 + (units-200)*20;
    } else {
        bill = 100*10 + 100*15 + 300*20 + (units-500)*25;
    }

    if (bill > 10000) {
        bill = bill + bill * 0.05;
    } else if (late == 1) {
        bill = bill + bill * 0.10;
    }else
        cout << "Final Bill: Rs. " << bill;
    return 0;
}
