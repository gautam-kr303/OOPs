// hybrid inheritance is a combination of multiple inheritance and multilevel inheritance,
// where a class can inherit from multiple base classes and also have a derived class that inherits from another derived class.
#include<iostream>
using namespace std;
class student
{
  public:
  void print()
  {
    cout<<"I am a student." << endl;
  }
};
class male
{
  public:
  void printMale()
  {
    cout<<"I am Male." << endl;
  } 

};
class female
{
  public:
  void printFemale()
  {
    cout<<"I am Female." << endl;
  }  
};

class boy:public student,public male
{
  public:
  void printBoy()
  {
    cout<<"I am a boy."<<endl;
  }
};
class girl:public student,public female
{
  public:
  void printGirl()
  {
    cout<<"I am a girl."<<endl;
  }
};
int main()
{
  girl g1;
  g1.printGirl();
  g1.print();
  g1.printFemale(); 
  
}


