// virtual function is defined in the base class which can be overridden in derived classes.
// This allows for dynamic binding and polymorphism in C++.
#include<iostream>
using namespace std;
class Animal
{
  public:
   virtual void speak()
  {
    cout<<"HU HU HU"<<endl;
  }
};
class Dog:public Animal{
  public:
  void speak()
  {
    cout<<"BOW BOW"<<endl;
  }
};
int main()
{
  Animal*p;
  p=new Dog(); // Pointer of base class pointing to derived class object
  p->speak(); // Calls the overridden function in Dog class
  return 0;
}