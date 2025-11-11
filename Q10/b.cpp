#include <iostream>
using namespace std;

template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T multiply() {
        return num1 * num2;
    }
};

int main() {
    Calculator<int> calcInt(10, 20);
    cout << "Addition (int): " << calcInt.add() << endl;
    cout << "Multiplication (int): " << calcInt.multiply() << endl;

    Calculator<double> calcDouble(5.5, 3.2);
    cout << "Addition (double): " << calcDouble.add() << endl;
    cout << "Multiplication (double): " << calcDouble.multiply() << endl;

    return 0;
}
