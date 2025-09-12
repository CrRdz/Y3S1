#include <iostream>
#include <cmath>   // for sqrt() and pow()

using namespace std;

int main() {
    double x1, y1, x2, y2;

    // a) Take input for two points P1 and P2
    cout << "Enter coordinates of P1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of P2 (x2 y2): ";
    cin >> x2 >> y2;

    // b) Calculate length of line P1P2
    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // c) Calculate gradient (slope) of line P1P2
    if (x2 != x1) {
        double gradient = (y2 - y1) / (x2 - x1);
        cout << "\nLength of line P1P2: " << length;
        cout << "\nGradient of line P1P2: " << gradient << endl;
    }
    else {
        cout << "\nLength of line P1P2: " << length;
        cout << "\nGradient of line P1P2: Undefined (vertical line)" << endl;
    }

    return 0;
}
