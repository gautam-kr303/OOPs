#include<iostream>
using namespace std;
class Human
{
  string religion,color;
  protected:
  string name;
  int age;
  int weight;
};

class Student: public Human
{
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