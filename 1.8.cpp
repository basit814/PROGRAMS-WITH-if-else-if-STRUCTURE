#include <iostream>
using namespace std;
int main() {
    float balance, withdraw, dailyWithdrawn;
    int blocked;
    cout << "Enter Balance, Withdraw Amount, Daily Withdrawn, Blocked (1/0): ";
    cin >> balance >> withdraw >> dailyWithdrawn >> blocked;

    if (blocked == 1) {
        cout << "Transaction Rejected - Account Blocked";
    } else if (withdraw < 500) {
        cout << "Minimum Withdrawal is Rs. 500";
    } else if ((int)withdraw % 500 != 0) {
        cout << "Amount must be multiple of Rs. 500";
    } else if (withdraw > balance) {
        cout << "Insufficient Balance";
    } else if (dailyWithdrawn + withdraw > 100000) {
        cout << "Daily Limit Exceeded";
    } else if (withdraw > 50000) {
        cout << "Additional Verification Required - Transaction Allowed";
        cout << "\nRemaining Balance: " << balance - withdraw;
    } else {
        cout << "Transaction Allowed";
        cout << "\nRemaining Balance: " << balance - withdraw;
    }
    return 0;
}
