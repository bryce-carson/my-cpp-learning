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

    // 2.4
    // 21
    int score = 98;
    if (score > 100)
        cout << "High\n";
    else
        cout << "Low\n";

    // 22
    double savings (100.00), expenses (98.00);
    if (savings >= expenses) {
        cout << "Solvent\n";
        savings -= expenses;
        expenses = 0;
    }
    else {
        cout << "Bankrupt\n";
    }

    // 23
    int exam_score = 60, programs_done = 12;
    if ((exam_score >= 60) && (programs_done >= 10))
        cout << "Passed\n";
    else
        cout << "Failed\n";

    // 24
    int temperature (100), pressure (200);
    if ((temperature >= 100) || (pressure >= 200))
        cout << "Warning\n";
    else
        cout << "OK\n";

    // 25
    double quadratic_function_input (4.0),
           quadratic_function_output (quadratic_function_input * quadratic_function_input - quadratic_function_input - 2);
    if ((quadratic_function_output < (-1)) || (quadratic_function_output > 2))
        cout << "The function output is POSITIVE; x = ";
    else
        cout << "The function output is NEGATIVE; x = ";
    cout
    << quadratic_function_input
    << ", and y = "
    << quadratic_function_output << ".\n";

    // 26
    quadratic_function_input = 11.0;
    quadratic_function_output = ((quadratic_function_input * quadratic_function_input)
                                          - (4 * quadratic_function_input)
                                          + 3);
    if ((quadratic_function_output > 1) &&
        (quadratic_function_output < 3))
        cout << "The function output is NEGATIVE; x = ";
    else
        cout << "The function output is POSITIVE; x = ";
    cout
    << quadratic_function_input
    << ", and y = "
    << quadratic_function_output << ".\n";

    /* 27
     * a.)  zero is the false (integer) value in C++, so when used as a boolean expression, the 'else' statement will always be executed and the statement: 'cout << "0 is false.";' will always be executed.
     * b.)  non-zero integers, when evaluated as boolean expressions, are always coerced to 'true', so the 'cout << "1 is true";' statement will always be executed.
     * c.)  I recalled that non-zero integers are 'true' in C++, but I did need to review the _Type Compatibilities_ section to see, of course, that "_any_ non-zero integer" (emphasis added) is coerced to 'true' in C++, not just positive, non-zero integers. */

    /* 28
     * The output of the while loop is the following:
     * 10
     * 7
     * 4
     * 1.
     * At the end of the while loop 'x' has the value '-2', but this does not satisfy the boolean expression of the
     * while loop, so no further output is produced. If the value of 'x' was used again, the value '-2' would propagate
     * into later usages. */

    /* 29
     * If the boolean expression '(x > 0)' were modified to check if 'x' is less than zero, no output would be produced,
     * and the initialized value of 'x = 10;' would not be changed.
     */

    /* 30
     * The output of this program is the same as the program in question 28, but the boolean expression is not evaluated
     * the before the compound statement is executed the first time, so were 'x' initialized to any integer value it
     * would be sent to the 'cout' stream, and its value would be reduced by 3 regardless of the initial value. Then the
     * boolean expression would be checked before any following iterations of the 'while' part of the _do-while_ loop.
     * As an example, if 'x' were intialized to '1', '1' would be sent to the 'cout' stream, then 'x' would be reduced
     * by '3', and its new value would be '-2'; this would not satisfy the boolean expression for the first iteration of
     * the 'while' part of the _do-while_ loop, so the compound statement would not be executed again and the program
     * would continue past the _do_while_ looping statement.
     */

    /* 31
     * The output of this program, like the example I detailed in my answer to question thirty, would be:
     * '-42'. No further output would be produced, because the first iteration of the 'while' component of the
     * _do-while_ loop would never occur because the changed value of the variable 'x' would be less than zero, not
     * satisfying the boolean expression.
     */

    /* 32
     * The important difference between a _do-while_ statement and a _while_ statement is that the compound statement,
     * or single statement, of a _do-while_ loop is executed once without evaluating the boolean expression. The
     * compound statement associated with the loop is always executed once before the boolean expression is executed, so
     * the 'loop' may never actually occur, and the compound statement is only _done_ ('do') once.
     */

    /* 33
     * The output of this program would be the initial value of 'x', which is '10', then '13', '16', '19', '22', and so
     * on towards positive infinity because the variable 'x' used by the boolean statement is never modified in such a
     * way that it will cause the boolean expression to evaluate to 'false', so it is an infinite loop.
     */

    // 34
    int loop_sentinel = 1;
    while (loop_sentinel < 21) {
        cout << loop_sentinel << endl;
        loop_sentinel++;
    }

    // 35
    int x = 5;
    if (x < 0) {
        x = 7;
        cout << "x is now positive.";
    }
    else {
        x = -7;
        cout << "x is now negative.";
    }

    /* 36
     * The output of this program would be:
     * Self-Test Exercise
     */

    // 37
    const double liters_per_gallon = 3.78533;
    double gallons_input;
    cout << "Enter a number of gallons, then press 'Enter': ";
    cin >> gallons_input;
    cout
    << "The volume of whatever liquid is measured in gallons has a measure in liters of: "
    << (gallons_input * liters_per_gallon) << endl;

    return 0;
}
