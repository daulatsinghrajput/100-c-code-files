#include<iostream>
#include<cctype> // Include the cctype library for isalpha() function
using namespace std;

int main() {
    char c;
    bool isinvalid = true;

    cout << "Enter a letter" << endl;
    cin >> c;

    while (isinvalid) { // get same condition then repeat loop 
        // Check if the input is a letter
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                cout << "Vowel" << endl;
                isinvalid = false;
            } else {
                cout << "Consonant"<< endl;
                isinvalid = false;
            }
        } else {
            cout << "Invalid input. Please enter a letter." << endl;
            cin >> c; // Read input again for another attempt
        }
    }

    return 0;
}
