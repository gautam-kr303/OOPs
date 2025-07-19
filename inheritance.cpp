// Defination: This code defines a class hierarchy in C++ where `Human` is the base class and `Student` is a derived class.
//   The `Student` class has methods to set and display its data.

// Inheritance allows the `Student` class to access protected members of the `Human` class, demonstrating the concept of inheritance in C++.
// Inheritance means creating a new class that is based on an existing class, inheriting its properties and behaviors.

#include<iostream>
using namespace std;
class Human
{
  private:
  string religion,color;
  protected:
  string name;
  int age;
  int weight;
};

class Student: public Human
{
  private:
  int rollNo;
  int fees;
  public:
  void setData(string n, int a, int w, int r, int c)
  {
    name = n; 
    age = a; 
    weight = w;
    rollNo = r;
    fees = c;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Fees: " << fees << endl;
  }
};
int main()
{
  Student s;
  s.setData("Gautam", 21, 60, 101, 5000);
  s.display();
  return 0;
}