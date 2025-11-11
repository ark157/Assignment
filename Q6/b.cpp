#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number operator-() {
        Number temp(-value);  
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10);
    cout << "Original ";
    num1.display();

    Number num2 = -num1;  
    cout << "After unary minus operator: ";
    num2.display();

    return 0;
}
