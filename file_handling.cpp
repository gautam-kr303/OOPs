// file handling is defined as a way to manage files in C++.

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//   //file ko open karna
//   ofstream fout;
//   fout.open("zoom.txt");
//   //write karna
//   fout<<"Hello, this is a file handling example in C++.\n";
//   fout.close(); //resources relaesed




// }

#include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {

  ifstream fin;
  fin.open("zoom.txt");
  char c;
  c=fin.get(); //get karna
  while(!fin.eof())
  {
    cout<<c;
     c=fin.get();
  }
  fin.close();

 }

