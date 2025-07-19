#include<iostream>
using namespace std;
class AccessModifier {
private:
    int a, b; // private members
    // These members cannot be accessed directly outside this class
protected:
    // protected members can be accessed in derived classes
    void setPrivate(int x, int y) {
        a = x;
        b = y;
    }

public:
    // public members can be accessed from outside the class
    
    void set(int x, int y) {
        a = x;
        b = y;
    }
    // method to display values of private members
    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

};
int main() {
    AccessModifier obj; // create an object of AccessModifier
    obj.set(10, 20); // set values using public method
    obj.display(); // display values using public method
    return 0;
}