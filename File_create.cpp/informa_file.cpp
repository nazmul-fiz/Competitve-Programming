#include <iostream>
#include<fstream>
#include<string>
using namespace std;

class A{
  public:
  string name, email;
  int number;
  int input()
  {
    cout<<"Enter the Name:";
    getline(cin, name);
    cout<<"Enter the Email:";
    getline(cin, email);
    cout<<"Enter the number:";
    cin>>number;
  }
  
  int output()
  {
    cout<<"The name is: "<<name<<endl;
    cout<<"The email is: "<<email<<endl;
    cout<<"The number is: 0"<<number<<endl;
  }
  int filemaker()
  {
    ofstream file("Info file");
    file<<"The name is: "<<name<<endl;
    file<<"The email is: "<<email<<endl;
    file<<"The number is: 0"<<number<<endl;
    file.close();
  }
};
int main() 
{
  A obj;
  obj.input();
  obj.output();
  obj.filemaker();
  
    return 0;
}