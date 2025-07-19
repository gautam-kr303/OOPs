#include<iostream>
using namespace std;
class customer{
  string name;
  int account_number;
  int balance;

  static int total_customer;
  
  static int total_balance;
  public:
  customer(string name,int account_number,int balance)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
    total_balance+=balance;
  };

  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<account_number<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Total Customers: "<<total_customer<<endl;
  }
   static void accessStatic()
  {
    cout<<"total customer: "<<total_customer<<endl;
    cout<<"Total Blance: "<<total_balance<<endl;
  }
  void deposit(int amount)
  {
    if(amount>0)
    {
      balance+=amount;
      total_balance+=amount;
    }
  }
  void withdraw(int amount)
  {
    if(amount>0 && amount<=balance)
    {
      balance-=amount;
      total_balance-=amount;
    }
  }

  
};
int customer::total_customer=0;
int customer::total_balance=0;

int main()
{
 customer a1("Gautam",1,120000);
 customer a2("Mohit",2,12000);

 a1.display();
 
 a1.deposit(46980);
 a1.display();
 customer::accessStatic();

}