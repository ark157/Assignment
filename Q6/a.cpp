#include <iostream>
using namespace std;

class Area {
public:
    float calculate(float length, float width) {
        return length * width;
    }

    float calculate(float base, float height, int triangle) {
        return 0.5 * base * height;
    }

    float calculate(float radius) {
        return 4 * 3.14159 * radius * radius;
    }
};

int main() {
    Area areaObj;
    float length, width, base, height, radius;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << areaObj.calculate(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << areaObj.calculate(base, height, 1) << endl;

    cout << "Enter radius of sphere: ";
    cin >> radius;
    cout << "Surface area of sphere: " << areaObj.calculate(radius) << endl;

    return 0;
}
