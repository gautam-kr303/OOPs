// Operator Overloading allows you to customize the behavior of operators (+, -, ==, etc.) for user-defined types like classes and structs.
#include<iostream>
using namespace std;
class complex
{
  int real;
  int img;
  public:
  complex() // Default constructor
  {
    real = 0;
    img = 0;
  }
  complex(int real,int img)
  {
    this->real=real;
    this->img=img;
  }
  void display()
  {
    cout<<real<<" + "<<img<<"i"<<endl;
  }
// Overloading the '+' operator
  complex operator+(complex  &c)
  {
    complex ans(0, 0); // Create a new complex number to hold the result
    ans.real = real + c.real;
    ans.img = img + c.img;
    return ans;
  }




};
int main()
{
  complex c1(3,4);
  c1.display();

  complex c2(5,6);
  c2.display();
  complex c3=c1+c2;
  c3.display(); // Display the result of the addition
  return 0;
}