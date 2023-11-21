#include<iostream>
using namespace std;

int main() {
    unsigned int marks;
    bool invalid = true;

    while (true) { //jab ye condition loop me khai bhi mile loop fir se start  ker do
        cout << "Enter your marks: " << endl;
        cin >> marks;

        if (marks > 100) {
            cout << "Invalid marks, try again" << endl;
        } 
        else if (marks > 90) {
            cout << "You are topper with A+ grade" << endl;
        } 
        else if (marks >= 75) {
            cout << "You are pass with A grade" << endl;
        } 
        else if (marks >= 60) {
            cout << "You are pass with B grade" << endl;
        } 
        else if (marks >= 33) {
            cout << "You are pass with C grade" << endl;
        } 
        else {
            cout << "You are fail" << endl;
        }

        // Agar valid input mil gaya toh loop ko break kardo
        if (marks >= 0 && marks <= 100) {
            break;
        }
    }

    return 0;
}
