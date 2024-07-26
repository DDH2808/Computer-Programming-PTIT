#include <iostream>
using namespace std;

double calculatePi(int terms) {
    double pi = 0;
    for (int i = 1; i <= terms; i++) {
        if (i % 2 == 0) {
            pi -= 4.0 / (2 * i - 1);
        } else {
            pi += 4.0 / (2 * i - 1);
        }
    }
    return pi;
}

int main() {
    int terms;
    cin >> terms;
    double pi = calculatePi(terms);
    cout << pi << endl;
    return 0;
}