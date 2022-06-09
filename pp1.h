//
// Created by cyber on 6/7/22.
//

/* From Savitch, Walter J., 1943 -
 * Problem solving with C++ / Walter Savitch ; contributor, Kenrick Mock. -- Ninth edition. */

#include <iostream>
using namespace std;
int pp1() {
    int number_of_pods, number_of_peas_per_pod, total_number_of_peas;

    cout
    << "Hello\n"
    << "Press the carriage return ('Enter') key after typing a number.\n"
    << "Enter the number of pea pods: ";
    cin >> number_of_pods;
    cout << "Enter the number of peas per pod: ";
    cin >> number_of_peas_per_pod;

    total_number_of_peas = number_of_pods / number_of_peas_per_pod;

    cout
    << "If you have "
    << number_of_pods
    << " pea pods, and\n"
    << "each pod has "
    << number_of_peas_per_pod
    << " peas per pod, then\n"
    << "Total number of peas: "
    << total_number_of_peas << "\n"
    << "Good-bye."
    << "\n";

    return 0;
}