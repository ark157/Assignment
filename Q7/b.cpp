#include <iostream>
#include <string>
using namespace std;

class PersonalDetails {
protected:
    string name;
    int age;

public:
    void readPersonalDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void printPersonalDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class JobDetails {
protected:
    string designation;
    float salary;

public:
    void readJobDetails() {
        cout << "Enter designation: ";
        getline(cin, designation);
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }

    void printJobDetails() {
        cout << "Designation: " << designation << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class Employee : public PersonalDetails, public JobDetails {
public:
    void readEmployeeDetails() {
        readPersonalDetails();
        readJobDetails();
    }

    void printEmployeeDetails() {
        printPersonalDetails();
        printJobDetails();
    }
};

int main() {
    Employee emp;
    cout << "Enter employee details:\n";
    emp.readEmployeeDetails();

    cout << "\nEmployee Information:\n";
    emp.printEmployeeDetails();

    return 0;
}
