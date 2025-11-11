#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int Rollno;
    string Name;
    string PRN;
    float TotalMarks;
    float Percentage;

public:
    Student(int r, string n, string p, float tMarks) {
        Rollno = r;
        Name = n;
        PRN = p;
        TotalMarks = tMarks;
        Percentage = 0; 
    }

    void calculateResult(float maxMarks) {
        if (maxMarks != 0)
            Percentage = (TotalMarks / maxMarks) * 100;
        else
            Percentage = 0;
    }

    void display() {
        cout << "Roll No: " << Rollno << endl;
        cout << "Name: " << Name << endl;
        cout << "PRN: " << PRN << endl;
        cout << "Total Marks: " << TotalMarks << endl;
        cout << "Percentage: " << Percentage << "%" << endl;
    }
};

int main() {
    int roll;
    string name, prn;
    float totalMarks, maxMarks;

    cout << "Enter student's roll number: ";
    cin >> roll;
    cin.ignore(); 
    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's PRN: ";
    getline(cin, prn);
    cout << "Enter total marks obtained: ";
    cin >> totalMarks;
    cout << "Enter maximum marks for the test: ";
    cin >> maxMarks;

    Student s(roll, name, prn, totalMarks);
    s.calculateResult(maxMarks);
    s.display();

    return 0;
}
