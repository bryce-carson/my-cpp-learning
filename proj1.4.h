//
// Created by cyber on 6/7/22.
//

#include "iostream"

using namespace std;

int proj14() {
    cout << "Input the number of seconds that the object is in free-fall for: ";
    int time; cin >> time;

    int acceleration = 32;
    int distance = (acceleration * time * time) / 2;
    cout
    << "The distance the object will fall is: "
    << distance
    << "feet.";

    return 0;
}