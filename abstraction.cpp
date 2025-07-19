// // Abstraction means hiding internal implementation details and showing only the essential features to the user.

// // Think of it as "what something does", not "how it does it."
//  Real-life Example:
// 
// Car:You use a steering wheel to drive — but you don’t need to know how the engine or gearbox works internally.

// C++ Program to Demonstrate the
// working of Abstraction

//BASIC ABSTRACTION EXAMPLE
#include <iostream>
using namespace std;

class implementAbstraction {
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}