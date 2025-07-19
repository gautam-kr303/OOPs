// single inheritance:when a class is derived from another class, it is called single inheritance.
// In this case, the derived class inherits properties and behaviors from the base class.


// #include<iostream>
// using namespace std;
// class Human
// {
//   protected:
//   string name;
//   int age;
//   int weight;
//   public:
//   void work()
//   {
//     cout << "Human is working." << endl;
//   }
// };
// class student:public Human{
//   private:
//   int rollNo;
//   int fees;
//   public:
//   void setData(string n, int a, int w, int r, int c)
//   {
//     name = n; 
//     age = a; 
//     weight = w;
//     rollNo = r;
//     fees = c;
//   }

//   void display()
//   {
//     cout << "Name: " << name << endl;
//     cout << "Age: " << age << endl;
//     cout << "Weight: " << weight << endl;
//     cout << "Roll No: " << rollNo << endl;
//     cout << "Fees: " << fees << endl;
//   }
// };
// int main()
// {
//   student s;
//   s.setData("Gautam", 21, 60, 101, 5000);
//   s.display();
//   s.work(); // Calling the inherited method from Human class
//   return 0;
// }

#include<iostream>
using namespace std;
class Human
{
  protected:
  string name;
  int age;
  int weight;
  public:
  Human(string name,int age,int weight)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
  }
  void work()
  {
    cout << "Human is working." << endl;
  }
};
class student:public Human{
  private:
  int rollNo;
  int fees;
  public:
 student(string n, int a, int w, int r, int c):Human(n,a,w)
  {
    
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
  student s("Gautam", 21, 60, 101, 5000);
  
  s.display();
  s.work(); // Calling the inherited method from Human class
  return 0;
}