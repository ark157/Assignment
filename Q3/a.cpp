#include <iostream>
using namespace std;

class Student {
private:
    string Name;
    int rollNumber;
    string PRN;

public:
    
    void enterDetails() {
        cout << "Enter student name: ";
        getline(cin, Name);  
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); 
        cout << "Enter PRN: ";
        getline(cin, PRN);
    }

    
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
    s.displayDetails();  
    return 0;
}
