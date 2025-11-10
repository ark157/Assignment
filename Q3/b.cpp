#include <iostream>
using namespace std;

class Employee {
private:
    float basicSalary;
    float TA;  // Travel Allowance
    float DA;  // Dearness Allowance
    float grossSalary;

public:
    void setBasicSalary(float salary);
    void calculateAllowances();
    void calculateGrossSalary();
    void displayGrossSalary();
};

// Define member functions outside the class using scope resolution operator

void Employee::setBasicSalary(float salary) {
    basicSalary = salary;
}

void Employee::calculateAllowances() {
    TA = 0.15 * basicSalary;  // 15% of basic salary
    DA = 0.30 * basicSalary;  // 30% of basic salary
}

void Employee::calculateGrossSalary() {
    grossSalary = basicSalary + TA + DA;
}

void Employee::displayGrossSalary() {
    cout << "Gross Salary = " << grossSalary << endl;
}

int main() {
    Employee emp;
    float salary;

    cout << "Enter the basic salary of the employee: ";
    cin >> salary;

    emp.setBasicSalary(salary);
    emp.calculateAllowances();
    emp.calculateGrossSalary();
    emp.displayGrossSalary();

    return 0;
}
