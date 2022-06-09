//
// Created by cyber on 6/7/22.
//

#include "iostream"
using namespace std;

int proj11() {
    cout
    << "To get the sum and product of two integers: type the first integer, press enter, then type the second"
    << " integer, then press enter again and the output will be emitted.\n"
    << "Integer A: "; int integer_a;
    cin >> integer_a;
    cout << "Integer B: "; int integer_b;
    cin >> integer_b;

    int integer_sum = integer_a + integer_b;
    int integer_product = integer_a * integer_b;

    cout
    << "The sum of integers A and B is: "
    << integer_sum << ", and\n"
    << "the product of integers A and B is: "
    << integer_product << ".\n";

    return 0;
}
