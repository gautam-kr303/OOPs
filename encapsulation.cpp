// wrapping of data & information in a single unit is called encapsulation.
// function ki help se data ko hide kiya ja sakta hai
// encapsulation is a fundamental concept of OOPs   
// jisse user sirf function ke through data access kar sake
// aur data ko direct access na kar sake  




#include<iostream>
using namespace std;
class customer{
  string name;;
  int balance;
  public:
  customer(string name,int balance)
  {
    this->name=name;
    this->balance=balance;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
  }
  void deposit(int amount)
  {
    if(amount>0)
    {
      balance+=amount;
    }
    else{
      cout<<"Deposit amount must be positive."<<endl;
    }
  }
};
int main()
{
  customer c1("Gautam",567890);
  c1.display();
  c1.deposit(10000);
  c1.display(); 
  c1.deposit(-500); // This should show an error message
  c1.display();
}
