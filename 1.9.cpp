#include <iostream>
using namespace std;
int main() {
    float km, waiting, rideTime, fare;
    int hour, premium, cancelled;
    cout << "Enter KM, Waiting Min, Ride Time Min, Hour (0-23), Premium (1/0), Cancelled (1/0): ";
    cin >> km >> waiting >> rideTime >> hour >> premium >> cancelled;

    fare = 150 + (km * 50) + (waiting * 10);

    if (cancelled == 1) {
        fare = fare + 300;
        cout << "Driver Cancelled - Penalty Rs. 300" << endl;
    } else if (hour >= 22 || hour < 6) {
        fare = fare + fare * 0.20;
    } else if (premium == 1) {
        fare = fare - fare * 0.10;
    }

    cout << "Final Fare: Rs. " << fare;
    return 0;
}
