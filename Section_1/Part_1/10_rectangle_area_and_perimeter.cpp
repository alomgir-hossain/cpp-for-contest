// todo: A rectangle has a width and a height that may be decimal numbers. Print its area and its perimeter, each rounded to exactly two digits after the decimal point.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double w, h;
    cin >> w >> h;

    cout << fixed << setprecision(2);

    cout << "Area: " << w * h << endl;
    cout << "Perimeter: " << 2 * (w + h) << endl;

    return 0;
}


// ==========================================
// NOTE: Floating-Point Formatting (iomanip)
// ==========================================
// 1. #include <iomanip> is required for fixed and setprecision().
// 2. Format manipulators like 'fixed' and 'setprecision(2)' are "sticky":
//    Once sent to cout, they apply to ALL floating-point numbers 
//    printed afterward until changed.
// 3. 'fixed' forces fixed-point notation (showing trailing zeros).
// 4. 'setprecision(n)' specifies 'n' digits after the decimal point 
//    and automatically rounds the number if necessary.
// ==========================================
