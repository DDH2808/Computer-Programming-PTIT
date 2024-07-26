#include <iostream>

using namespace std;

int main(){
    int luachon;
    float doC, doF;
    cout << "1. do C sang do F" << endl;
    cout << "2. do F sang do C" << endl;
    cin >> luachon;
    if (luachon == 1) {
        cout << "Nhap do C : ";
        cin >> doC;
        doF=(1.8 * doC) + 32;
        cout << "Do F = " << doF << endl;
    }
    else {
        cout << "Nhap do F : ";
        cin >> doF;
        doC=(doF - 32) / 1.8;
        cout << "Do C = " << doC << endl;
    }
    return 0;
}

