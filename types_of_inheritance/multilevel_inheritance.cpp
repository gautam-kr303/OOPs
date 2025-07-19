// multilevel inheritance is when a class is derived from another derived class, forming a chain of inheritance.
// In this case, the derived class inherits properties and behaviors from the base class and the intermediate derived class.
#include<iostream>
using namespace std;
class Human
{
  protected:
  string name;
  public:
  void introduce()
  {
    cout<<"my name is: "<<name<<endl;
  }
};
class employee:public Human{
  protected:
  int salary;
  public:
  void monthly_salary()
  {
    cout<<"my monthly salary is: "<<salary<<endl;
  }
};
class manager:public employee
{
  private:
  string department;
  public:
  void setData(string n, int s, string d)
  {
    name = n; 
    salary = s; 
    department = d;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Department: " << department << endl;
  }
};
int main()
{
  manager m;
  m.setData("Gautam", 50000, "IT");
  m.display();
  Human h;
  h.introduce(); // This will not work as 'name' is protected in Human class
  m.introduce();
  m.monthly_salary(); // Calling the inherited method from employee class
  return 0;
}