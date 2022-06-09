#include <iostream>
#include "pp1.h"
#include "pp5.h"
#include "proj1.1.h"
#include "proj1.3.h"
#include "proj1.4.h"
#include "proj1.5.h"
#include "exerciseTwelve.h"
#include "exerciseEleven.h"

using namespace std;

int main() {
    cout << "std::cout << 'a string' << std::endl;" << endl;
    cout << "=====================================" << endl;
    cout << "The Insert (overloaded LH bit shift) operator is _chained_, apparently." << endl;

    /* Study a style guide for C++20 on splitting long strings, concatenation, etc.
     * Why do we bother having shorter lines? Our displays are wide, but I know that I don't like reading long code
     * either! Perhaps some industrial and organizational psychologists who work with programmers, and also understand
     * the psychology of reading, should look into this. Perhaps the discomfort isn't from long lines themselves, but
     * eye-tracking to the next line! */
    cout << "What is chaining? Does `'a string' << std::endl` work alike concatenation, given that `std::endl` works "
         << "like `'Hello, world!\\n'`?\n";

    // An alternative to `cout` is `printf`, which prints _formatted_ strings to the console. Learn more about `printf`.
    printf("A number: %d.\n", 5);

    const char* ppnum_format_str = "Running practice problem: %f\n\n";

//    printf(ppnum_format_str, 1);
//    pp1();
//
//    printf(ppnum_format_str, 5);
//    pp5();
//
//    printf(ppnum_format_str, 1.1);
//    proj11();
//
//    printf(ppnum_format_str, 1.3);
//    proj13();
//
//    printf(ppnum_format_str, 1.4);
//    proj14();
//
//    printf(ppnum_format_str, 1.5);
//    proj15();

    cout << R"(print("I'm an R syntax string, inside a C++ Raw String Literal."))" << endl;

    //Self test exercises one through seven of chapter two:
    // One
//    int feet = 0, inches = 0;
//    int feet_alt (0), inches_alt (0);
//    cout
//    << feet << " feet, and\n"
//    << inches << " inches, and\n"
//    << feet_alt << " feet, declared in the alternate style, and\n"
//    << inches_alt <<  " inches, declared in the alternate style." << endl;
//
//    // Two
//    int count = 0; double distance = 1.5;
//    cout << "Count is: " << count << ", and\nDistance is: " << distance << endl;
//
//    // Three
//    int sum = 0, n1 = 3, n2 = 9;
//    sum = n1 + n2;
//    cout << "The sum of n1 (" << n1 << ") and n2 (" << n2 << ") is: " << sum << ".\n";
//
//    // Four
//    double length = 0;
//    cout
//    << "The initial value of length is: " << length
//    << " and the next expression in this 'cout' statement will increase its value by 8.3 to a total of: "
//    << (length + 8.3) << ".\n";

    // Five
//    int product, n;
//    cout << "Type two integers, separated by whitespace, then press 'Enter': ";
//    cin >> product >> n;
//    cout << "'Product' and 'n' were uninitialized integers, but were provided the respective values of: " << product << " and " << n << endl;
//    product = product * n;
//    cout << "'Product' × 'n' = " << product << endl;

    // Six
//    int one, two, three, four, five, six;
//    cout << one << two << three << four << five << six;
    /* Running the program once, the output produced was '0420210032764-1414775008165535'.
     * Running the program a second time, the output produced was '04202100327672005724656165535'.
     * The reson the output differs is because uninitialized variables do nothing more than associate an identifier with
     * a memory address; they do not clear the memory at that location (what is clearing anyways?, the output would be
     * just as garbage 'cleared' as it is 'uncleared'.). Variables can freely be consumed without them being receiving
     * an initial value. This allows a programmer to access existing values in specified memory addresses that are user
     * software accessible, or when run in a kernel mode allows the kernel to dump the contents of memory for an
     * arbitrary address to disk or display, such as during a non-fully-blocking-and-locked kernel panic. */

    // Seven
//    double automobile_speed, employee_hourly_wage, max_exam_score;

    // Eight
    cout << "The answer to the question of\nLife, the Universe, and Everything is 42." << endl;

    // Nine
    cout << "Type a whole number, then press 'Enter': "; int the_number; cin >> the_number; cout << the_number << endl;

    // Ten
    cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(3); cout << 93.5 << endl;

    // Eleven: read the file "exerciseEleven.cpp".
    exerciseEleven();

    // Twelve: read the file: "exerciseTwelve.cpp".
    exerciseTwelve();

    // Thirteen
    cout << "\n\t";

    // Preventing the output of exercise thirteen from changing the tabulation of exercise fourteen:
    cout << endl;
    // Fourteen
    double one (1.000), two (1.414), three (1.732), four (2.000), five (2.236);
    cout
    << "N\tSquare Root\n"
    << "1\t" << one << endl
    << "2\t" << two << endl
    << "3\t" << three << endl
    << "4\t" << four << endl
    << "5\t" << five << endl;

    return 0;
}
