// Polymorphism = "many forms"
// In C++, it means the same function name or operator behaves differently based on context (like object type or arguments).


// Function Overloading: Same function name, different parameters (type or number).
#include <iostream>
using namespace std;  
class Area
{
  public:
  int calculateArea(int length, int breadth) {
    return length * breadth; // Rectangle area
  }
  double calculateArea(double radius) {
    return 3.14 * radius * radius; // Circle area
  }
  double calculateArea(double base, double height) {
    return 0.5 * base * height; // Triangle area
  }
  void display() {
    cout << "Function Overloading Example" << endl;
  }
};
int main() {
  Area areaCalculator;
  areaCalculator.display();
  
  cout << "Area of Rectangle (5, 10): " << areaCalculator.calculateArea(5, 10) << endl;
  cout << "Area of Circle (7.0): " << areaCalculator.calculateArea(7.0) << endl;
  cout << "Area of Triangle (6.0, 4.0): " << areaCalculator.calculateArea(6.0, 4.0) << endl;

  return 0;
}