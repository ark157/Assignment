#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int start;
    int end;

public:
    DivisibleByNine(int s, int e) {
        start = s;
        end = e;
    }

    friend void calculate(DivisibleByNine obj);
};

void calculate(DivisibleByNine obj) {
    int count = 0, sum = 0;

    for (int i = obj.start; i <= obj.end; i++) {
        if (i % 9 == 0) {
            count++;
            sum += i;
        }
    }

    cout << "Count of numbers divisible by 9 between " << obj.start << " and " << obj.end << " = " << count << endl;
    cout << "Sum of numbers divisible by 9 between " << obj.start << " and " << obj.end << " = " << sum << endl;
}

int main() {
    DivisibleByNine obj(100, 200);
    calculate(obj);

    return 0;
}
