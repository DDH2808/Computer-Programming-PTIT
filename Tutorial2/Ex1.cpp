#include <iostream>
#include <string>

using namespace std;

bool is_secure(string password) {
    // Check if the password is at least 6 characters long
    if (password.length() < 6) {
        return false;
    }

    // Check if the password contains at least one digit and one special character
    bool has_digit = false;
    bool has_special_char = false;
    for (char c : password) {
        if (isdigit(c)) {
            has_digit = true;
        } else if (c == '@' || c == '&' || c == '%') {
            has_special_char = true;
        }
    }
    if (!has_digit || !has_special_char) {
        return false;
    }

    // Check if the password includes upper and lower case letters
    bool has_upper = false;
    bool has_lower = false;
    for (char c : password) {
        if (isupper(c)) {
            has_upper = true;
        } else if (islower(c)) {
            has_lower = true;
        }
    }
    if (!has_upper || !has_lower) {
        return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string password;
        cout << "Enter a password: ";
        cin >> password;

        if (is_secure(password)) {
        cout << "The password is secure." << endl;
        } else {
        cout << "The password is not secure." << endl;
        }
    }
    return 0;
}