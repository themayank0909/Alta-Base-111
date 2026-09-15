#include <iostream>

using namespace std;

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    // Check month range 1-12
    if (m < 1 || m > 12) {
        cout << "INVALID DATE (Invalid month)" << endl;
    } else {
        int maxD = 31;

        // Months with 30 days
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            maxD = 30;
        } else if (m == 2) {
            // Leap year check
            if (y % 400 == 0) {
                maxD = 29;
            } else {
                maxD = 28;
            }
        }

        // Check day range
        if (d < 1 || d > maxD) {
            cout << "INVALID DATE (Invalid day)" << endl;
        } else {
            cout << "VALID DATE" << endl;
        }
    }

    return 0;
}
