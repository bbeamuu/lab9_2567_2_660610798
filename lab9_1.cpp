#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double principal, interestRate, payment;
    cout << "Enter initial loan: ";
    cin >> principal;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> payment;

    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    cout << fixed << setprecision(2); 
    int year = 1;
    while (principal > 0) {
        double interest = principal * (interestRate / 100);
        double total = principal + interest;
        double actualPayment = (total < payment) ? total : payment;
        double newBalance = total - actualPayment;

        cout << setw(13) << left << year; 
        cout << setw(13) << left << principal; 
        cout << setw(13) << left << interest; 
        cout << setw(13) << left << total;
        cout << setw(13) << left << actualPayment;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        principal = newBalance;
        year++;
    }

    return 0;
}
