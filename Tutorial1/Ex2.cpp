#include <iostream>

using namespace std;

int main() {
    double lower, upper, diff;

    cin >> lower >> upper >> diff;

    cout << "°F  | ºC" << endl;

    for (double f = lower; f <= upper; f += diff) {
        double c = (f - 32) * 1.8;
        cout << f << " | " << c << endl;
    }

    return 0;
}