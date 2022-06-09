//
// Created by cyber on 6/8/22.
//

#include "iostream"

using namespace std;

int exerciseTwelve() {
    cout
    << "Type two whole numbers, separated by new lines or blank spaces (spaces or tabs), then press 'Enter' to have\n"
    << "their sum emitted: ";
    int number_a, number_b; cin >> number_a >> number_b;
    cout
    << "The first number entered was: " << number_a << endl
    << "The second number entered was: " << number_b << endl
    << "The sum of these two numbers is: " << (number_b + number_a) << endl;

    return 0;
}