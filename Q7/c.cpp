#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void readPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void printPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    string designation;
    float salary;

public:
    void readEmployee() {
        cout << "Enter designation: ";
        getline(cin, designation);
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }

    void printEmployee() {
        cout << "Designation: " << designation << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void readManager() {
        cout << "Enter department: ";
        getline(cin, department);
    }

    void printManager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    cout << "Enter manager details:\n";
    m.readPerson();
    m.readEmployee();
    m.readManager();

    cout << "\nManager Information:\n";
    m.printPerson();
    m.printEmployee();
    m.printManager();

    return 0;
}
