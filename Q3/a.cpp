#include <iostream>
using namespace std;

class Student {
private:
    string Name;
    int rollNumber;
    string PRN;

public:
    // Method to enter student details
    void enterDetails() {
        cout << "Enter student name: ";
        getline(cin, Name);  // To handle names with spaces
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); // To clear the newline after rollNumber input
        cout << "Enter PRN: ";
        getline(cin, PRN);
    }

    // Optional: Method to display student details
    void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "PRN: " << PRN << endl;
    }
};

int main() {
    Student s;
    s.enterDetails();
    s.displayDetails();  // To verify entered data, optional
    return 0;
}
