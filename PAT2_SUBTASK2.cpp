#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

int main() {
    double readingValue, total, average;

    for (int i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0;
        cout << "\nEXPERIMENT " << i << endl;
        cout << "============\n";

        for (int j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total += readingValue;  // accumulate total
        }

        average = total / NUM_READINGS;

        cout << fixed << setprecision(2);  // set precision for output

        // Evaluation logic
        if (average < 100) {
            cout << "Experiment " << i << " average: " << average
                 << " is Below acceptable range\n";
        } else if (average >= 100 && average <= 300) {
            cout << "Experiment " << i << " average: " << average
                 << " is Within acceptable range\n";
        } else {
            cout << "Experiment " << i << " average: " << average
                 << " is Above acceptable range\n";
        }
    }

    return 0;
}
