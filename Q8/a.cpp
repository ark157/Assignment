#include <iostream>
using namespace std;


class Parent {
public:
    void show() {
        cout << "Show function in Parent class" << endl;
    }
};


class Child : public Parent {
public:
    void show() {
        cout << "Show function in Child class (overridden)" << endl;
    }
};

int main() {
    Parent p;
    Child c;

    p.show();  
    c.show();  

    Parent* ptr = &c;
    ptr->show();  

    return 0;
}
