//
// Created by cyber on 6/7/22.
//

#include "iostream"

using namespace std;

int proj13() {
    cout
    << "To determine the sum total of cents of some coins, type the number of coins of that type, then press enter,"
    << " when prompted.\n";
    int nickles; cout << "No. of nickles: "; cin >> nickles;
    int dimes; cout << "No. of dimes: "; cin >> dimes;
    int quarters; cout << "No. of quarters: "; cin >> quarters;

    int sum_total_cents =
            nickles * 5 +
            dimes * 10 +
            quarters * 25;

    cout
    << "The sum total of cents of "
    << nickles
    << " nickles, "
    << dimes
    << " dimes, and "
    << quarters
    << " is: "
    << sum_total_cents
    << " cents.";

    return 0;
}