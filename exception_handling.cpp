// exception handling is defined in the C++17 standard, which provides a robust framework for managing errors and exceptions in a structured way. 
// #include<iostream>
// using namespace std;
// class customer
// {
//   string name;
//   int balance,account_number;
//   public:
//   customer(string n, int b, int a)
//   {
//     name = n;
//     balance = b;
//     account_number = a;
//   } 
//   void deposit(int amount)
//   {
//     if(amount>0)
//     {
//       balance += amount;
//       cout<<"Amount Deposited: "<<amount<<endl;
//     }
//     else
//     {
//       cout<<"Invalid amount. Cannot deposit negative amount."<<endl;
//     }
//   }
//   void withdraw(int amount)
//   {
//     if(amount>0 && amount<=balance)
//     {
//       balance-=amount; 
//       cout<<" Amount Withdrawn: "<<amount<<endl;
//     }
//     else if(amount<0)
//     {
//       cout<<"Invalid amount. Cannot withdraw negative amount."<<endl;
//     }
//     else
//     {
//       cout<<"Insufficient balance. Cannot withdraw "<<amount<<endl;
//     }
//   }

// };
// int main()
// {
//   customer c1("Gautam", 1000, 12345);
//   c1.deposit(500);
//   c1.withdraw(600000);
// }


// -------------------------------------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
class customer
{
  string name;
  int balance,account_number;
  public:
  customer(string n, int b, int a)
  {
    name = n;
    balance = b;
    account_number = a;
  } 
  void deposit(int amount)
  {
    if(amount>0)
    {
      balance += amount;
      cout<<"Amount Deposited: "<<amount<<endl;
    }
    else
    {
       throw "Invalid amount. Cannot deposit negative amount.";
    }
  }
  void withdraw(int amount)
  {
    if(amount>0 && amount<=balance)
    {
      balance-=amount; 
      cout<<" Amount Withdrawn: "<<amount<<endl;
    }
    else if(amount<0)
    {
      throw "Invalid amount. Cannot withdraw negative amount.";
    }
    else
    {
      throw "Insufficient balance. Cannot withdraw ";
    }
  }

};
int main()
{
  customer c1("Gautam", 1000, 12345);
   try{
    c1.deposit(500);
    c1.withdraw(600000);
  }
  catch(const char* msg)
  {
    cout << "Error: " << msg << endl;
  }
  


}