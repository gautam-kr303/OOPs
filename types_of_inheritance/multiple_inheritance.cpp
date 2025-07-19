// multiple inheritance is when a class is derived from more than one base class,
//  allowing it to inherit properties and behaviors from multiple sources.
#include<iostream>
using namespace std;
class engineer
{
  
  public:
  string specialization;
  
  void work() {
    cout << "I have specialization: " << specialization<< endl;
  }
};
class youtuber
{
  public:
  int subscribers;
  void createContent() {
    cout << "I have " << subscribers << " subscribers." << endl;
  }

};
class codeTeacher:public engineer,public youtuber{
  public:
  string name;
  codeTeacher(string n,string spec,int subs)
  {
    name=n;
    specialization=spec;
    subscribers=subs;
  }
  void display()
  {
    cout<<"Name: " << name << endl;
    cout<<"Specialization: " << specialization << endl; 
    cout<<"Subscribers: " << subscribers << endl;
    work();
    createContent();

  }
};
int main()
{
  codeTeacher ct("Gautam", "Software Engineering", 1000000);
  ct.display();
  
  return 0;
}