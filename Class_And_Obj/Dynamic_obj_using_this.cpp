#include <bits/stdc++.h>
using namespace std;
class person
{
  public:
  string name;
  int age;
  person(string name, int age)
  {
    // using this keyword to point the thing
    this->name=name;  
    this->age=age;
  }
};
int main() 
{
  person* rakib = new person("Rakib Hossain", 24);
  person* sakib = new person("sakib hossain", 12);

//    rakib->age= sakib->age;  // we can do it one by one if needed
//    rakib->name= sakib->name;

  *rakib= *sakib;     // to copy all thing from sakib
  delete sakib;    // delete the sakib data 
  cout<<rakib->name<<" "<< rakib->age<<endl;

    return 0;
}