#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    void inputDetails() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];  

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].inputDetails();
    }

    cout << "\nDisplaying student details:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
    }

    return 0;
}
