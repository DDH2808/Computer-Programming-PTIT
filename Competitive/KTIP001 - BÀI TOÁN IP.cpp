#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValidIP(vector<string> parts) {
    for (string part : parts) {
        if (part.length() > 1 && part[0] == '0') {
            return false;
        }
        int num = stoi(part);
        if (num < 0 || num > 255) {
            return false;
        }
    }
    return true;
}

int countValidIPAddresses(string s) {
    int count = 0;
    for (int i = 1; i < s.length() - 2; i++) {
        for (int j = i + 1; j < s.length() - 1; j++) {
            for (int k = j + 1; k < s.length(); k++) {
                vector<string> parts = {s.substr(0, i), s.substr(i, j - i), s.substr(j, k - j), s.substr(k)};
                if (isValidIP(parts)) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int count = countValidIPAddresses(s);
        cout << count << endl;
    }
    return 0;
}