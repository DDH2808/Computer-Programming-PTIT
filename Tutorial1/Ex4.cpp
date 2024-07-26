#include <iostream>
#include<math.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        double x;
        int n;

        cin >> x >> n;

        if (n < 0) {
            return 1;
        }
        else {
            double result = pow(x, n);
            cout << result << endl;
        }
    }
    return 0;
}