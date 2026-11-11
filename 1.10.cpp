#include <iostream>
using namespace std;
int main() {
    float m1, m2, m3, m4, m5, total, perc;
    cout << "Enter marks of 5 subjects (out of 100): ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    perc = total / 5;

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        cout << "Failed - Failed in one subject";
    } else if (perc < 50) {
        cout << "Failed - Percentage below 50%";
    } else if (perc >= 85) {
        cout << "Passed - Gold Medal, Percentage: " << perc;
    } else if (perc >= 75 && perc <= 84) {
        cout << "Passed - Silver Medal, Percentage: " << perc;
    } else if (perc >= 65 && perc <= 74) {
        cout << "Passed - Merit Scholarship, Percentage: " << perc;
    } else {
        cout << "Passed - Degree Qualified, Percentage: " << perc;
    }
    return 0;
}
