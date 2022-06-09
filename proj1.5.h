//
// Created by cyber on 6/7/22.
//

#include "iostream"
#include "string"

using namespace std;

int proj15() {
    cout << "Type a single alphabetic letter, then press 'Enter': \n";
    string input_char; cin >> input_char;
    cout
    << "   " << input_char << input_char << input_char << "\n"
    << "  " << input_char << "   " << input_char << "\n"
    << " " << input_char << "\n"
    << " " << input_char << "\n"
    << " " << input_char << "\n"
    << "  " << input_char << "   " << input_char << "\n"
    << "   " << input_char << input_char << input_char << "\n";

    return 0;
}