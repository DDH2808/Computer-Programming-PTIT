#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        switch (n)
        {
        case 7:
            cout << "VTV1" << endl;
            break;
        case 9:
            cout << "VTV2" << endl;
            break;
        case 14:
            cout << "VTV3" << endl;
            break;
        case 19:
            cout << "ESPN" << endl;
            break;
        case 25:
            cout << "VCTV1" << endl;
            break;
        case 31:
            cout << "HANOI1" << endl;
            break;
        case 44:
            cout << "HTV1" << endl;
            break;
        case 63:
            cout << "HTV2" << endl;
            break;
        default:
            cout << "Invalid TV channel number!" << endl;
        }
    }
    return 0;
}
