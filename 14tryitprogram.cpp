#include<iostream>
using namespace std;

int main() {
    unsigned int package;
    bool isValidInput = false;

    while (!isValidInput) {
        cout << "Enter your package: " << endl;
        cin >> package;
        if (package >= 50) {
            cout << "I accept the package" << endl;
            isValidInput = true;
        } else {
            cout << "Invalid input. Please enter a positive value of 50 or more." << endl;
        }
    }

    return 0;
}
