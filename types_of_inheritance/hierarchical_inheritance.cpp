
// hierarchical inheritance is when multiple classes are derived from a single base class,
// allowing them to share the properties and behaviors defined in the base class.

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

class Teacher:public Human{
  private:
  string subject;
  int salary;
  public:
  void setData(string n, int a, int w, string sub, int sal)
  {
    name = n; 
    age = a; 
    weight = w;
    subject = sub;
    salary = sal;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
  }
};
int main()
{
  Student s;
  s.setData("Gautam", 21, 60, 101, 5000);
  s.display();
  cout<<"other child class of Human is Teacher"<<endl;
  Teacher t;
  t.setData("Dr. Gautam", 45, 70, "Mathematics", 80000);
  t.display();
  return 0;
}