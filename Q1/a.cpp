#include <iostream>
using namespace std;

int main() {
    int marks;
    float percentage;

    cout << "Enter your marks out of 100: ";
    cin >> marks;

    // Calculate percentage
    percentage = (float)marks;

    // Display grade using nested if-else
    if (percentage >= 0 && percentage <= 100) {
        if (percentage >= 90) {
            cout << "Grade: A+" << endl;
        } else if (percentage >= 80) {
            cout << "Grade: A" << endl;
        } else if (percentage >= 70) {
            cout << "Grade: B" << endl;
        } else if (percentage >= 60) {
            cout << "Grade: C" << endl;
        } else if (percentage >= 50) {
            cout << "Grade: D" << endl;
        } else {
            cout << "Grade: F (Fail)" << endl;
        }
    } else {
        cout << "Invalid marks entered. Please enter marks between 0 and 100." << endl;
    }

    return 0;
}
