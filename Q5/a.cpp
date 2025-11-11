#include <iostream>
using namespace std;

class Number {
private:
    int num;
    int square;
    int cube;

public:
    Number() {
        cout << "Enter a number: ";
        cin >> num;
        square = num * num;
        cube = num * num * num;
    }

    void display() {
        cout << "Number: " << num << endl;
        cout << "Square: " << square << endl;
        cout << "Cube: " << cube << endl;
    }
};

int main() {
    Number n;  
    n.display();

    return 0;
}
