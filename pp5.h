//
// Created by cyber on 6/7/22.
//

#include "iostream"

int pp5() {
    const char* welcome_message = "Fence perimeter calculator v1.0\n";
    cout << welcome_message;

    cout << "Enter the width of the rectangle to be fenced: ";
    int width; cin >> width;

    cout << "Enter the height of the rectangle to be fenced: ";
    int height; cin >> height;

    int perimeter = 2 * height + 2 * width;
    cout
    << "The perimeter of the rectangle to be fenced is: "
    << perimeter << "\n";

    return 0;
}