#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) {
        throw "Negative number not allowed!";
    }
    if (n > 20) {  
        throw n;
    }
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number to find factorial: ";
    cin >> num;

    try {
        unsigned long long result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }
    catch (const char* msg) {  
        cout << "Exception caught: " << msg << endl;
    }
    catch (int n) {  
        cout << "Exception caught: Factorial of " << n << " is too large to calculate." << endl;
    }
    catch (...) { 
        cout << "Unknown exception caught." << endl;
    }

    return 0;
}
